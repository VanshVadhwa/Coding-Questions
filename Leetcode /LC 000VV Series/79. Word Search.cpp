class Solution {
private:
    bool dfs(vector<vector<char>>& board, int i, int j, string& word, int index) {
        if(index==word.length()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[index]) return false;

        char c = board[i][j];
        board[i][j] = '#';

        bool found = dfs(board,i,j-1,word,index+1) || dfs(board,i,j+1,word,index+1) ||
        dfs(board,i-1,j,word,index+1) || dfs(board,i+1,j,word,index+1);

        board[i][j] = c;
        return found;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(board[i][j]==word[0]) {
                    bool found = dfs(board,i,j,word,0);
                    if(found) return true;
                }
            }
        }
        return false;
    }
};
