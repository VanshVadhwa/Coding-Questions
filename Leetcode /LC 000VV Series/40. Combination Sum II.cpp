class Solution {
    void combo(vector<int>& nums, int index, int n, int sum, vector<int>& temp, vector<vector<int>>& ans)
    {
        if(sum==0) {
            ans.push_back(temp);
            return;
        }
        
        for(int i=index;i<n;i++) {
            if(i>index && nums[i]==nums[i-1]) continue;
            if(nums[i] > sum) break;

            temp.push_back(nums[i]);
            combo(nums,i+1,n,sum-nums[i],temp,ans);
            temp.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        combo(candidates,0,n,target,temp,ans);
        return ans;
    }
};
