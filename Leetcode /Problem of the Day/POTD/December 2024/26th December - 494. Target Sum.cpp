class Solution {
private:
    int targetSum(vector<int>& nums, int index, int sum, int target) {
        if(index==nums.size()) {
            return sum==target ? 1 : 0;
        }
        return targetSum(nums,index+1,sum+nums[index],target) + 
        targetSum(nums,index+1,sum-nums[index],target);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return targetSum(nums,0,0,target);
    }
};
