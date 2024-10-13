class Solution {
private:
    void permute(vector<int>& arr, int n, vector<vector<int>>& ans, int index)
    {
        //base case
        if(index==n) {
            ans.push_back(arr);
            return;
        }

        vector<bool> use(21,0);
        for(int i=index;i<n;i++) {
            if(use[arr[i]+10]==0) {
                swap(arr[i],arr[index]);
                permute(arr,n,ans,index+1);
                swap(arr[i],arr[index]);
                use[arr[i]+10]=1;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        permute(nums,n,ans,0);
        return ans;
    }
};
