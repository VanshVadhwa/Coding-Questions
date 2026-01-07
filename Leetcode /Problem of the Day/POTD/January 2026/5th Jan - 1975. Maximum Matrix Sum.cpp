class Solution {
    using ll = long long;
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size(), count = 0, mini = INT_MAX;
        ll ans = 0;

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j] < 0) {
                    count += 1;
                }
                mini = min(mini,abs(matrix[i][j]));
                ans += abs(matrix[i][j]);
            }
        }

        return (count%2==0) ? ans : ans-2*mini; 
    }
};
