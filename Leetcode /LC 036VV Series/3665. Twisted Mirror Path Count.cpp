class Solution {
private:
    const int MOD = 1e9 +7;

    int solve(vector<vector<int>>& grid, int i, int j, int dir, int m, int n,
    vector<vector<vector<int>>>& dp) 
    {
        if(i >= m || j >= n) return 0;
        if(i==m-1 && j == n-1) return 1;
        
        if(dp[i][j][dir] != -1) return dp[i][j][dir];

        if(grid[i][j] == 1) {
            if(dir==0) return solve(grid,i,j+1,1,m,n,dp);
            else if(dir==1) return solve(grid,i+1,j,0,m,n,dp);
        }

        long long move = 0;
        if(i+1 < m) move += solve(grid,i+1,j,0,m,n,dp);
        if(j+1 < n) move += solve(grid,i,j+1,1,m,n,dp);

        return dp[i][j][dir] =  move%MOD;
    }
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(2,-1)));
        return solve(grid,0,0,0,m,n,dp);
    }
};
