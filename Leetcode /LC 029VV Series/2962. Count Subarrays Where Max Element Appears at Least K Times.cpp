class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        int maxi = *max_element(nums.begin(),nums.end());
        int count = 0;
        for(int left=0,right=0;left<n;left++) {
            while(count<k && right<n) {
                count += (nums[right++]==maxi);
            }
            if(count >= k) {
                ans += (n-right+1);
            }
            count -= (nums[left]==maxi);
        }

        return ans;
    }
};
