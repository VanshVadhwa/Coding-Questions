// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();

//         //Brute Force 
//         class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();

        // vector<vector<int>> ans(n, vector<int>(n,1));

        // for(int j=n-1;j>=0;j--)
        // {
        //     int rowIndex = n-1-j;
        //     int colIndex = 0;
        //     for(int i=0;i<n;i++)
        //     {
        //         ans[rowIndex][i] = matrix[i][j];
        //     }
        // }

        // reverse(ans.begin(), ans.end());

        // for(int i=0;i<n;i++)
        // {
        //     reverse(ans[i].begin(), ans[i].end());
        // }

        // matrix = ans;

        
        //More Optimized
        // vector<vector<int>> ans(n, vector<int>(n,1));

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         ans[j][n-1-i] = matrix[i][j];
        //     }
        // }

        // matrix = ans;

        // Most Optimized (O(1)) Space
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //Transpose
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //Reverse Rows
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
    }
};
