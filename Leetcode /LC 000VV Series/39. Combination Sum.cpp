class Solution {
private:
    void combination(vector<int>& nums, int index, int n, int sum, vector<int>& temp, vector<vector<int>>& ans)
    {
        //base cases
        if(sum==0) {
            ans.push_back(temp);
            return;
        }
        if(index>=n || sum < 0) {
            return;
        }

        //not include
        combination(nums,index+1,n,sum,temp,ans);
        
        //include
        temp.push_back(nums[index]);
        combination(nums,index,n,sum-nums[index],temp,ans);
        temp.pop_back();
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> temp;
        vector<vector<int>> ans;
        combination(candidates,0,n,target,temp,ans);
        return ans;
    }
};
