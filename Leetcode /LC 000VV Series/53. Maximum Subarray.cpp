class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int ans = INT_MIN, prefix = 0;

        for(int i=0;i<n;i++) 
        {
            prefix += nums[i];
            ans = max(prefix,ans);
            if(prefix < 0) prefix = 0;
        }
        return ans;
    }
};
