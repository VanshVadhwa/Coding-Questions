class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1, prefixAnd = 0;

        int maximum = *max_element(nums.begin(), nums.end());

        for(int i=0;i<n;i++)
        {
            if(nums[i]==maximum) {
                prefixAnd++;
                ans = max(prefixAnd, ans);
            }
            else {
                prefixAnd=0;
            }
        }

        return ans;
    }
};
