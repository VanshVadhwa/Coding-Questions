class Solution {
    int targetSum(vector<int>& nums, int index, int n, int sum) {
        //base case
        if(index==n) {
            return sum==0;
        }
        int ans = targetSum(nums,index+1,n,sum-nums[index]);
        ans += targetSum(nums,index+1,n,sum+nums[index]);
        return ans;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = targetSum(nums,0,n,target);
        return ans;
    }
};
