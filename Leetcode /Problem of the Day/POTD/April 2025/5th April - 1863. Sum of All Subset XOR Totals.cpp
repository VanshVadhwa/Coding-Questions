class Solution {
private:
    int solve(int index, int curr, vector<int>& nums) {
        if(index >= nums.size()) {
            return curr;
        }

        int include = solve(index+1,curr^nums[index],nums);
        int exclude = solve(index+1,curr,nums);

        return include + exclude;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        return solve(0,0,nums);
    }
};
