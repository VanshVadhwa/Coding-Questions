class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, AND = 0, ans = 0;

        for(int right=0;right<n;right++) {
            while((AND & nums[right]) > 0) {
                AND ^= nums[left++];
            }
            AND |= nums[right];
            ans = max(ans,right-left+1);
        }

        return ans;
    }
};
