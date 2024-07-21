class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        
        int first = 0, second = 0;

        for(int i=0;i<n;i++)
        {
            first += mat[i][i];
            second += mat[i][n-1-i];
        }

        if(n%2!=0)
        return first+second-mat[n/2][n/2];
        else 
        return first+second;
    }
};
