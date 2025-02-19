class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long sum = 0;
        int ans = 1, left = 0;

        for(int right=1;right<n;right++) {
            sum += (long long)(nums[right]-nums[right-1]) * (right-left);

            while(sum > k) {
                sum -= (nums[right] - nums[left]);
                left++;
            }
            
            ans = max(ans,right-left+1); 
        }

        return ans;
    }
};
