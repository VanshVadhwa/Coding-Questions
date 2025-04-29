class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size(), left = 0;
        int maxi = *max_element(nums.begin(),nums.end());
        long long ans = 0;

        for(int right=0;right<n;right++) {
            if(nums[right]==maxi) k--;
            while(k <= 0) {
                ans += n-right;
                if(nums[left]==maxi) k++;
                left += 1;
            }
        }

        return ans;
    }
};
