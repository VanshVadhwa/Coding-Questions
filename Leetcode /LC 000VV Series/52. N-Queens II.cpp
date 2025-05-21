class Solution {
private:
    void solve(int row, int n, int& ans, vector<string>& board, unordered_set<int>& columns, unordered_set<int>& diagonals, unordered_set<int>& antiDiagonals) {
        if(row==n) {
            ans += 1;
            return;
        }

        for(int col=0;col<n;col++) {
            if(columns.count(col) || diagonals.count(row-col) || antiDiagonals.count(row+col)) continue;

            board[row][col] = 'Q';
            columns.insert(col);
            diagonals.insert(row-col);
            antiDiagonals.insert(row+col);

            solve(row+1,n,ans,board,columns,diagonals,antiDiagonals);

            board[row][col] = '.';
            columns.erase(col);
            diagonals.erase(row-col);
            antiDiagonals.erase(row+col);
        }
    }
public:
    int totalNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        unordered_set<int> columns, diagonals, antiDiagonals;
        int ans = 0;

        solve(0,n,ans,board,columns,diagonals,antiDiagonals);

        return ans;
    }
};
