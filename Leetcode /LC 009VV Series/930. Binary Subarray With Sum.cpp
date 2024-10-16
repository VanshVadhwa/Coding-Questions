class Solution {
private:
    int atMost(vector<int>& nums, int goal) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int ans = 0;
        for(int right=0;right<n;right++)
        {
            sum += nums[right];
            while(left<=right && sum > goal) {
                sum -= nums[left];
                left++;
            }
            ans += right-left;
        }
        return ans;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal) - atMost(nums,goal-1);
    }
};
