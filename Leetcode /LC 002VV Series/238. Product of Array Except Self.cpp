class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        int count = 1;

        for(int i=0;i<n;i++)
        {
            ans[i] *= count;
            count *= nums[i];
        }

        count = 1;

        for(int i=n-1;i>=0;i--)
        {
            ans[i] *= count;
            count *= nums[i];
        }

        return ans;
    }
};
