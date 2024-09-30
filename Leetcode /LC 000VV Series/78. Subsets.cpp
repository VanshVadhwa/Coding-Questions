class Solution {
private:
    void subsets(vector<int>& arr,int index, int n, vector<vector<int>>& ans, vector<int> temp)
    {
        //base case
        if(index==n) {
            ans.push_back(temp);
            return;
        }

        //not included
        subsets(arr,index+1,n,ans,temp);

        //included
        temp.push_back(arr[index]);
        subsets(arr,index+1,n,ans,temp);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsets(nums,0,nums.size(),ans,temp);
        return ans;
    }
};
