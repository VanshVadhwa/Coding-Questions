class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(), left = 0;
        double sum = 0.0, ans = (double)INT_MIN;

        for(int i=0;i<n;i++) {
            sum += nums[i];
            if(i >= k-1) {
                ans = max(ans,(sum/k));
                sum -= nums[left++];
            }
        }

        return ans;
    }
};
