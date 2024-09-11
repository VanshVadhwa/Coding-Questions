class Solution {
    int oneBits(int n) {
        int ans = 0;
        while(n>0) {
            ans += n&1;
            n >>= 1;
        }
        return ans;
    }
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int numsXOR = nums[0];

        for(int i=1;i<n;i++) {
            numsXOR ^= nums[i];
        }

        int ansXOR = numsXOR ^ k;

        return oneBits(ansXOR); 
        //we canb use inuild library "__builtin_popcount(ansXOR)" to count number of 1 bits as well
    }
};
