class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int gas = 0;
        for(int i=0;i<n-1;i++) {
            if(gas <= nums[i]) {
                gas = nums[i]-1;
            } 
            else {
                gas--;
            }
            if(gas < 0) return false;
        }

        return true;
    }
};
