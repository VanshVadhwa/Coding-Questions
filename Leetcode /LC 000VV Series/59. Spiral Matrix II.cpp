class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,n*n));

        int count = 1;
        int total = n*n;

        int top =0;
        int left = 0;
        int right = n-1;
        int bottom = n-1;

        while(count < total && left<=right && top<=bottom)
        {
            for(int j=left;j<=right && count < total;j++)
            {
                matrix[top][j] = count;
                count++;
            }
            top++;

            for(int i=top;i<=bottom && count < total;i++)
            {
                matrix[i][right] = count;
                count++;
            }
            right--;

            for(int j=right;j>=left && count < total;j--)
            {
                matrix[bottom][j] = count;
                count++;
            }
            bottom--;

            for(int i=bottom;i>=top && count < total;i--)
            {
                matrix[i][left] = count;
                count++;
            }
            left++;
        }   

        return matrix;
    }
};
