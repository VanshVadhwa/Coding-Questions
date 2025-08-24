class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, count = 0, ans = 0;

        for(int right=0;right<n;right++) {
            if(!nums[right]) count += 1;
            while(count > 1) {
                count -= (!nums[left++]);
            }
            ans = max(ans,right-left);
        }

        return ans;
    }
};
