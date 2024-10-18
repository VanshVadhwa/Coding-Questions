class Solution {
private:
    void subsets(vector<int>& nums, int index, int n, vector<int>& temp, vector<vector<int>>& ans)
    {
        //base case
        if(index==n) {
            ans.push_back(temp);
            return;
        }

        subsets(nums,index+1,n,temp,ans);
        temp.push_back(nums[index]);
        subsets(nums,index+1,n,temp,ans);
        temp.pop_back();
    }
    int maxSub(vector<int>& nums, int index, int value, int maxValue, int ans)
    {
        //base case
        if(index==nums.size()) {
            return (value==maxValue) ? ans + 1 : ans; 
        }

        //not included
        int count = 0;
        count += maxSub(nums,index+1,value,maxValue,ans);
        //included
        count += maxSub(nums,index+1,value|nums[index],maxValue,ans);

        return count;
    }
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        vector<vector<int>> ans;
        subsets(nums,0,n,temp,ans);

        int value = 0;
        int maxValue = 0;
        for(int i=0;i<ans.size();i++) {
            for(int j=0;j<ans[i].size();j++) {
                value = value|ans[i][j];
            }
            maxValue = max(value, maxValue);
        }

        return maxSub(nums,0,0,maxValue,0);
    }
};
