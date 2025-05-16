class Solution {
private:
    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        // check the row and col 
        for(int i=0;i<9;i++) {
            if(board[row][i]==num || board[i][col]==num) return false;
        }

        // checking the subgrid
        int boxRow = (row/3)*3, boxCol = (col/3)*3;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if(board[boxRow+i][boxCol+j]==num) return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for(int row=0;row<9;row++) {
            for(int col=0;col<9;col++) {
                if(board[row][col]=='.') {
                    for(char c='1';c<='9';c++) {
                        if(isValid(board,row,col,c)) {
                            board[row][col] = c;
                            if(solve(board)) return true;
                            board[row][col] = '.'; // undo, backtrack
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
