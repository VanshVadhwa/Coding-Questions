class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int> pref(n,0);
        pref[0] = nums[0]; 
        for(int i=1;i<n;i++) {
            pref[i] = pref[i-1]^nums[i];
        }

        vector<int> ans(n,0);
        int k = pow(2,maximumBit)-1;
        int currXor = 0;
        for(int i=0;i<n;i++) {
            currXor = pref[n-i-1];
            ans[i] = k-currXor;
        }

        return ans;
    }
};
