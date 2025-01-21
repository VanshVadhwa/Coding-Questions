class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        long long sum0 = 0;
        long long sum1 = 0;
        for(int j=0;j<n;j++) {
            sum0 += grid[0][j];
            sum1 += grid[1][j];
        }

        long long ans = LLONG_MAX;
        long long include = 0;

        for(int j=0;j<n;j++) {
            sum0 -= grid[0][j];
            ans = min(ans,max(sum0,include));
            include += grid[1][j];
        }

        return ans;
    }
};
