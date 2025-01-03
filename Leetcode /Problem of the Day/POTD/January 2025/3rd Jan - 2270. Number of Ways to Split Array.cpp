class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long totalSum = 0;
        for(int i : nums) totalSum += i;
        long long subSum = 0;
        int ans = 0;

        for(int i=0;i<n-1;i++) {
            subSum += nums[i];
            totalSum -= nums[i];
            ans += (subSum >= totalSum) ? 1 : 0; 
        }

        return ans;
    }
};
