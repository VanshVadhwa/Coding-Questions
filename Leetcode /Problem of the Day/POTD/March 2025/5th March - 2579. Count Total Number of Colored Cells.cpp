class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1;
        long long base = 4;

        while(n-- > 1) {
            ans += base;
            base += 4;
        }

        return ans;
    }
};
