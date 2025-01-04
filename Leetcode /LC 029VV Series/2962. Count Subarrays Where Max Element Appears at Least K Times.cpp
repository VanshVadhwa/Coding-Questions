class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        int left = 0;
        int maxi = *max_element(nums.begin(),nums.end());
        int count = 0;
        
        for(int right=0;right<n;right++) {
            if(nums[right]==maxi) count++;

            while(count==k) {
                ans += (n - right);
                if(nums[left]==maxi) count--;
                nums[left++]--;
            }
        }

        return ans;
    }
};
