class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        n -= 1;
        while(n>0) {
            ans += n;
            n-=2;
        }
        return ans;
    }
};
