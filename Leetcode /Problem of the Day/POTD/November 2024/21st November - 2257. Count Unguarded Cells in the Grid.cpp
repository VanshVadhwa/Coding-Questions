class Solution {
private:
    bool check(int row, int col, vector<vector<int>>& matrix) {
        if(matrix[row][col]==-1 || matrix[row][col]==0) {
            return false;
        }
        return true;
    }
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> matrix(m, vector<int>(n,1));

        // marking the guards
        for(int i=0;i<guards.size();i++) {
            int col1 = guards[i][0];
            int col2 = guards[i][1];
            matrix[col1][col2] = -1;
        }

        // marking the walls
        for(int i=0;i<walls.size();i++) {
            int col1 = walls[i][0];
            int col2 = walls[i][1];
            matrix[col1][col2] = 0;
        }

        // traversing the array row wise 
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j]==-1) 
                {
                    // check vertically up
                    for(int up=i-1;up>=0;up--) {
                        if(!check(up,j,matrix)) break;
                        matrix[up][j] = 2;
                    }

                    // check vertically down
                    for(int down=i+1;down<m;down++) {
                        if(!check(down,j,matrix)) break;
                        matrix[down][j] = 2;
                    }

                    // check horizontally right
                    for(int right=j+1;right<n;right++) {
                        if(!check(i,right,matrix)) break;
                        matrix[i][right]=2;
                    }

                    // check horizontally left
                    for(int left=j-1;left>=0;left--) {
                        if(!check(i,left,matrix)) break;
                        matrix[i][left]=2;
                    }
                }
            }
        }
        
        int ans = 0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j]==1) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
