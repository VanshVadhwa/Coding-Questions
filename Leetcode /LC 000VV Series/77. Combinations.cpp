class Solution {
private:
    void sub(vector<int>& nums, int index, vector<int>& temp, vector<vector<int>>& ans, int k) {
        if(temp.size()==k) {
            ans.push_back(temp);
            return;
        } 
        if(index==nums.size()) return;

        sub(nums,index+1,temp,ans,k);
        temp.push_back(nums[index]);
        sub(nums,index+1,temp,ans,k);
        temp.pop_back();
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i=0;i<n;i++) {
            nums[i] = i+1;
        }
        vector<int> temp;
        vector<vector<int>> ans;
        sub(nums,0,temp,ans,k);
        return ans;
    }
};
