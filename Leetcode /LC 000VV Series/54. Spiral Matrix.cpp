class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<int> ans(row*col,0);
        int left = 0, right = col-1, top = 0, bottom = row-1;
        int index = 0;

        while(left <= right && top <= bottom) {
            for(int i=left;i<=right;i++) {
                ans[index++] = matrix[top][i];
            }
            top++;
            for(int i=top;i<=bottom;i++) {
                ans[index++] = matrix[i][right];
            }
            right--;
            for(int i=right;i>=left && top<=bottom;i--) {
                ans[index++] = matrix[bottom][i];
            }
            bottom--;
            for(int i=bottom;i>=top && left<=right;i--) {
                ans[index++] = matrix[i][left];
            }
            left++;
        }

        return ans;
    }
};
