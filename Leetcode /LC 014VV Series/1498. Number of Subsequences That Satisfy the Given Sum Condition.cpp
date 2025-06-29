class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod = 1e9 + 7, n = nums.size();
        sort(nums.begin(),nums.end());
        int start = 0, end = n-1, ans = 0;

        vector<int> power(n,1);
        for(int i=1;i<n;i++) {
            power[i] = (2*power[i-1])%mod;
        }

        while(start <= end) {
            if(nums[start] + nums[end] <= target) {
                ans =  (ans + power[end-start])%mod;
                start++;
            }
            else {
                end--;
            }
        }

        return ans;
    }
};
