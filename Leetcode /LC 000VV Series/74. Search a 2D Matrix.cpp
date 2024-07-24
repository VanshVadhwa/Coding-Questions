class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0, end = row*col-1;

        while(start <= end)
        {
            int mid = start + (end-start/2);

            int rowIndex = mid/col;
            int colIndex = mid%col;

            if(matrix[rowIndex][colIndex] == target)
            {
                return true;
            }

            else if(matrix[rowIndex][colIndex] < target) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return false;
    }
};
