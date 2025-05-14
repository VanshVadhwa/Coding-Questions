class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++) {
            vector<bool> row(10,false);
            vector<bool> col(10,false);
            for(int j=0;j<9;j++) {
                // row check
                if(board[i][j] != '.') {
                    if(row[board[i][j]-'0']) return false;
                    row[board[i][j]-'0'] = true;
                }
                // col check
                if(board[j][i] != '.') {
                    if(col[board[j][i]-'0']) return false;
                    col[board[j][i]-'0'] = true;
                }
            }
        }

        // square box check
        for(int i=0;i<9;i+=3) {
            for(int j=0;j<9;j+=3) {
                vector<bool> diagonal(10,false);
                for(int k=i;k<i+3;k++) {
                    for(int l=j;l<j+3;l++) {
                        if(board[k][l]=='.') continue;
                        if(diagonal[board[k][l]-'0']) return false;
                        diagonal[board[k][l]-'0'] = true;
                    }
                }
            }
        }

        return true;
    }
};
