class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size(), left = 0;
        long long sum = 0, ans = 0;

        for(int right=0;right<n;right++) {
            sum += nums[right];
            while(sum*(right-left+1) >= k) {
                sum -= nums[left++];
            }
            ans += (right-left+1);
        }

        return ans;
    }
};
