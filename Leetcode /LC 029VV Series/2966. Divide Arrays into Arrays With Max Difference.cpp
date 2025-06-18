class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;

        for(int i=0;i<n;i++) {
            temp.push_back(nums[i]);
            if(temp.size()==3) {
                if(temp[2] - temp[0] > k) return {};
                ans.push_back(temp);
                temp.clear();
            }
        }

        return ans;
    }
};
