class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        if(nums[n-1]==nums[n-2] || nums[0]==nums[n-1]) return nums[n-1];

        for(int i=0;i<n-2;i++) {
            if(nums[i]==nums[i+1] || nums[i]==nums[i+2]) return nums[i];
        }

        return -1;
    }
};
