class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();

        while(k) {
            int minimum = INT_MAX;
            int index = 0;
            for(int i=0;i<n;i++) {
                if(nums[i] < minimum) {
                    index = i;
                    minimum = nums[i];
                }
            }
            nums[index] *= multiplier;
            k--;
        }
        return nums;
    }
};
