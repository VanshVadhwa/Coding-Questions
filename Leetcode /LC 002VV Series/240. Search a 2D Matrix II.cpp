class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int left = col-1, top = 0;

        while(left >= 0 && top < row)
        {
            if(matrix[top][left]==target) {
                return true;
            }
            else if(matrix[top][left]<target) {
                top++;
            }
            else {
                left--;
            }
        }
        return false;
    }
};
