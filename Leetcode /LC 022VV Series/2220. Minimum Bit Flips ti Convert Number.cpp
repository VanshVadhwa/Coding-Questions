class Solution {
public:
    int minBitFlips(int start, int goal) {
        int oneBits = start^goal;
        int ans = 0;

        while(oneBits>0) {
            ans += oneBits&1;
            oneBits >>= 1;
        }

        return ans;
    }
};
