class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        for(int i=0;i<n;i++) {
            int sum = 0;
            for(int j=i;j<n;j++) {
                int len = j-i+1;
                sum += nums[j];
                if(len > r) break;
                if(len >= l && len <= r && sum > 0) {
                    ans = min(sum,ans);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
