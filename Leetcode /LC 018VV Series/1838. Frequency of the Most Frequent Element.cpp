class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long sum = 0;
        long long ans = 0;
        long long left = 0;
        long long right = 0;

        while(right < n)
        {
            sum += nums[right];
            while(nums[right]*(right-left+1) > sum+k) {
                sum -= nums[left];
                left++;
            }
            ans = max(ans,right-left+1);
            right++;
        }

        return ans;
    }
};
