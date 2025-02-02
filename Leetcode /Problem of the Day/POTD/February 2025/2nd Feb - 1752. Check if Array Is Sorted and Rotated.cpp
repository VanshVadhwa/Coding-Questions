class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;

        for(int i=1;i<n;i++) {
            if(nums[i]<nums[i-1] && !flag) {
                flag = true;
            }
            else if(nums[i]<nums[i-1] && flag) {
                return false;
            }
        }

        if(flag && nums[0] < nums[n-1]) return false;

        return true;
    }
};