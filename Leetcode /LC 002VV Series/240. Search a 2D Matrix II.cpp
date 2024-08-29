// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int i=0, j=col-1;

//         while(i < row && j>= 0)
//         {
//             if(matrix[i][j]==target) return true;
//             else if(matrix[i][j]<target) i++;
//             else j--;
//         }

//         return false;   
//     }
// };

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0;i<col;i++)
        {
            int start = 0, end = row-1;
            while(start <= end)
            {
                int mid = start + (end-start)/2;

                if(matrix[mid][i]==target) {
                    return true;
                }
                else if(matrix[mid][i]<target) {
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
            }
        }
        return false;
    }
};
