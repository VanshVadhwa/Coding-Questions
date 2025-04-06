class Solution {
private:
    vector<int> solve(vector<int>& nums, int index, int prevIndex, vector<vector<vector<int>>>& memo) {
        if (index == nums.size()) {
            return {};
        }

        if (!memo[index][prevIndex+1].empty()) {
            return memo[index][prevIndex+1];
        }

        vector<int> skip = solve(nums,index+1,prevIndex,memo);

        vector<int> take;
        if (prevIndex == -1 || nums[index] % nums[prevIndex] == 0) {
            take = solve(nums,index+1,index,memo);
            take.push_back(nums[index]);
        }

        if (take.size() > skip.size()) {
            return memo[index][prevIndex+1] = take;
        } else {
            return memo[index][prevIndex+1] = skip;
        }
    }

public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return nums;

        sort(nums.begin(), nums.end());
        vector<vector<vector<int>>> memo(n, vector<vector<int>>(n+1));
        vector<int> result = solve(nums,0,-1,memo);

        reverse(result.begin(), result.end());
        return result;
    }
};
