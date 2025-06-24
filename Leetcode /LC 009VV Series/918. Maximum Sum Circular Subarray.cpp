class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, maxi = INT_MIN;
        for(int i : nums) {
            sum += i;
            maxi = max(sum,maxi);
            if(sum < 0) {
                sum = 0;
            }
        }

        if(maxi<0) return maxi;

        sum = 0;
        int totalSum = 0, mini = INT_MAX;
        for(int i : nums) {
            sum += i;
            totalSum += i;
            mini = min(sum,mini);
            if(sum > 0) {
                sum = 0;
            }
        }

        return max(totalSum - mini, maxi);
    }
};
