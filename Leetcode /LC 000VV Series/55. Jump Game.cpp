class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int curr = nums[0];

        for(int i=1;i<n;i++) {
            curr -= 1;
            if(curr < 0) return false;
            if(curr < nums[i]) {
                curr = nums[i];
            }
        }

        return true;
    }
};
