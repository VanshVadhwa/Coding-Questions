class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int top = 0;
        int right = col-1;
        int bottom = row-1;
        int left = 0; 

        while(left <= right && top<=bottom)
        {
            //printing top
            for(int j=left;j<=right && top<=bottom;j++)
            { 
                ans.push_back(matrix[top][j]);
            }
            top++;

            //printing right
            for(int i=top;i<=bottom && left <= right;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;

            //printing bottom
            for(int j=right;j>=left && top<=bottom;j--)
            {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;

            // printing left
            for(int i=bottom;i>=top && left <= right;i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int count = 0;
//         int totalCount = row*col;

//         int top = 0;
//         int right = col-1;
//         int bottom = row-1;
//         int left = 0; 

//         while(count < totalCount)
//         {
//             //printing top
//             for(int j=left;j<=right && count < totalCount;j++)
//             { 
//                 ans.push_back(matrix[top][j]);
//                 count++;
//             }
//             top++;

//             //printing right
//             for(int i=top;i<=bottom && count < totalCount;i++)
//             {
//                 ans.push_back(matrix[i][right]);
//                 count++;
//             }
//             right--;

//             //printing bottom
//             for(int j=right;j>=left && count < totalCount;j--)
//             {
//                 ans.push_back(matrix[bottom][j]);
//                 count++;
//             }
//             bottom--;

//             // printing left
//             for(int i=bottom;i>=top && count < totalCount;i--)
//             {
//                 ans.push_back(matrix[i][left]);
//                 count++;
//             }
//             left++;
//         }

//         return ans;
//     }
// };
