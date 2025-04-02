class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0LL, maxValue = nums[0], maxDiff = 0;

        for(int i=1;i<n;i++) {
            ans = max(maxDiff*nums[i],ans);
            maxDiff = max(maxValue-nums[i],maxDiff);
            maxValue = max(maxValue,(long long)nums[i]);
        }

        return ans;
    }
};
