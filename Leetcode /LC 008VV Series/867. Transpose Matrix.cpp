class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<vector<int>> ans(col, vector<int>(row,1));
        for(int j=0;j<col;j++) {
            for(int i=0;i<row;i++) {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
