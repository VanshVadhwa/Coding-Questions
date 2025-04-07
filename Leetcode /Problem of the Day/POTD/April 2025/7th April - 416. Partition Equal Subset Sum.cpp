class Solution {
private:
    bool solve(vector<int>& nums, int index, int sum, vector<vector<int>>& dp) 
    {
        if(sum==0) return true;
        if(sum < 0 || index==nums.size()) return false;

        if(dp[index][sum] != -1) return dp[index][sum];

        bool include = solve(nums,index+1,sum-nums[index],dp);
        bool exclude = solve(nums,index+1,sum,dp);

        return dp[index][sum] = include || exclude;
    }

public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2 != 0) return false;
        vector<vector<int>> dp(200,vector<int>(20000,-1));
        return solve(nums,0,sum/2,dp);
    }
};
