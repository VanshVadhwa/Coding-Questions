class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int row = nums.size();
        int col = nums[0].size();
        int ans = 0;

        for(int i=0;i<row;i++) {
            sort(nums[i].begin(),nums[i].end(),greater<int>());
        }

        for(int i=0;i<col;i++) {
            int maxi = 0;
            for(int j=0;j<row;j++) {
                maxi = max(maxi,nums[j][i]);
            }
            ans += maxi;
        }

        return ans;
    }
};
