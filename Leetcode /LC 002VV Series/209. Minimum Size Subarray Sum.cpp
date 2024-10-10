class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int sum = 0;
        int elements = 0;
        int ans = 100001;

        while(right < n)
        {
            sum += nums[right];
            elements += 1;
            while(sum >= target)
            {
                ans = min(ans,elements);
                sum -= nums[left];
                elements -= 1;
                left++;
            }
            right++;
        }
        return ans == 100001 ? 0 : ans;
    }
};
