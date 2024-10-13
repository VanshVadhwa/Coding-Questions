class Solution {
private:
    void permut(vector<int>& arr, int n, vector<vector<int>>& ans, vector<int>& temp, vector<bool>& visited)
    {
        //base case
        if(temp.size()==n) {
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<n;i++) {
            if(visited[i]==0) {
                visited[i] = true;
                temp.push_back(arr[i]);
                permut(arr,n,ans,temp,visited);
                //backtrack
                visited[i] = false;
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(n,false);
        permut(nums,n,ans,temp,visited);
        return ans;
    }
};
