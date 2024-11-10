class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        n -= 1;

        while(n-->0) {
            ans = (ans+1 | x);
        }
        
        return ans;
    }
};
