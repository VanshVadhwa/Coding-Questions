class Solution {
private:
    void solve(vector<int>& nums, int index, int sum, vector<int>& temp, vector<vector<int>>& ans) 
    {
        if(sum==0) {
            ans.push_back(temp);
            return;
        }
        if(index==nums.size() || sum < 0) return;

        for(int i=index;i<nums.size();i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            solve(nums,i,sum-nums[i],temp,ans);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,0,target,temp,ans);
        return ans;
    }
};
