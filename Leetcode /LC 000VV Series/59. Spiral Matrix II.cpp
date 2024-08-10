class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));

        int total = n*n;
        int count = 1;

        int left = 0, right = n-1, top = 0, bottom = n-1;

        while(count <= total)
        {
            //top
            for(int i=left;i<=right && count <= total;i++)
            {
                matrix[top][i] = count;
                count++;
            }
            top++;

            //right
            for(int i=top;i<=bottom && count <= total;i++)
            {
                matrix[i][right] = count;
                count++;
            }
            right--;

            //bottom
            for(int i=right;i>=left && count <= total;i--)
            {
                matrix[bottom][i] = count;
                count++;
            }
            bottom--;

            //left
            for(int i=bottom;i>=top && count <= total;i--)
            {
                matrix[i][left] = count;
                count++;
            }
            left++;
        }
        return matrix;
    }
};
