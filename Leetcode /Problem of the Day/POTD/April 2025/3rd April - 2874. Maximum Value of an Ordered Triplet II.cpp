class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0, maxValue = nums[0], maxDiff = 0;

        for(int i=1;i<n;i++) {
            ans = max(ans,maxDiff*nums[i]);
            maxDiff = max(maxValue-nums[i],maxDiff);
            maxValue = max((long long)nums[i],maxValue);
        }

        return ans;
    }
};
