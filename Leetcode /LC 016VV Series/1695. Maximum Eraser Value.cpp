class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> map;
        int n = nums.size(), left = 0, ans = 0, sum = 0;

        for(int right=0;right<n;right++) {
            map[nums[right]]++;
            while(map[nums[right]] > 1) {
                sum -= nums[left];
                map[nums[left++]] -= 1;
            }
            sum += nums[right];
            ans = max(ans,sum);
        }

        return ans;
    }
};
