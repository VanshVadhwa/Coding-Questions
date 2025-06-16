class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = -1, mini = nums[0];
        for(int i=1;i<n;i++) {
            if(nums[i] <= mini) {
                mini = nums[i];
            }
            else {
                ans = max(ans,nums[i]-mini);
            }
        }
        return ans;   
    }
};
