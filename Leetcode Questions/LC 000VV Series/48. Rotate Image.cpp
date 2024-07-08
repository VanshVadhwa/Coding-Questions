class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                //Swapping the elements 
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<n/2;j++) {
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
    }
};
