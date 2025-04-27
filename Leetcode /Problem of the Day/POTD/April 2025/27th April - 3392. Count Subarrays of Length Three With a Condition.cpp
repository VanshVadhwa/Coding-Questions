class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i=1;i<n-1;i++) {
            int sum = nums[i-1] + nums[i+1];
            if(nums[i] == 2*sum) {
                ans += 1;
            }
        }

        return ans;
    }
};
