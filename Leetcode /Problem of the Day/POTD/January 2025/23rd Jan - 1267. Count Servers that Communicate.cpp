class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> colP(m,0);
        vector<int> rowP(n,0);

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]==1) {
                    colP[j]++;
                    rowP[i]++;
                }
            }
        }

        int ans = 0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]==1 && (colP[j]>1 || rowP[i]>1)) {
                    ans += 1;
                }
            }
        }

        return ans;
    }
};
