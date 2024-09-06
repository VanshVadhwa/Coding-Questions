class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        int sign = 1;
        while(n>0) {
            sign *= -1;
            ans += sign*(n%10);
            n /= 10;
        }
        return ans*sign;
    }
};
