class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = 0;

        for(int i=0;i<n;i++) {
            ans = max(nums[i] + nums[n-1-i], ans);
        }

        return ans;
    }
};
