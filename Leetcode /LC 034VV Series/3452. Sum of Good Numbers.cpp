class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int ans = 0;
        for(int i=0;i<nums.size();i++) {
            if(i-k >= 0 && i+k < nums.size()) {
                if(nums[i] > nums[i+k] && nums[i] > nums[i-k]) ans += nums[i];
            }
            else if(i-k >= 0 && nums[i] > nums[i-k]) {
                ans += nums[i];
            }
            else if(i+k < nums.size() && nums[i] > nums[i+k]) {
                ans += nums[i];
            }
        }

        return ans;
    }
};
