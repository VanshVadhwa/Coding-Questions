class Solution {
private:
    bool check(int n, vector<string>& Board, int row, int col)
    {
        int i = row;
        int j = col;

        //upper left check
        while(i>-1 && j>-1) {
            if(Board[i][j]=='Q') {
                return false;
            }
            i--;
            j--;
        }

        //upper right check
        i = row;
        j = col;
        while(i>-1 && j<n) {
            if(Board[i][j]=='Q') {
                return false;
            }
            i--;
            j++;
        }

        return true;
    }
    void find(int row, int n, vector<vector<string>>& ans, vector<string>& Board, vector<bool>& column)
    {
        //base case
        if(row==n) {
            ans.push_back(Board);
            return;
        }

        for(int col=0;col<n;col++)
        {
            if(column[col]==false && check(n,Board,row,col))
            {
                column[col] = true;
                Board[row][col] = 'Q';
                find(row+1,n,ans,Board,column);
                column[col] = false;
                Board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> Board(n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                Board[i].push_back('.');
            }
        }
        vector<bool> column(n,false);
        find(0,n,ans,Board,column);
        return ans;
    }
};
