class Solution {
    int reverse(int num) {
        int rem = 0, ans = 0;
        while(num)
        {
            rem = num%10;
            ans = ans*10+rem;
            num /= 10;
        }
        return ans;
    }
public:
    bool isSameAfterReversals(int num) {
        int ans = reverse(num);
        int ans2 = reverse(ans);
        return num == ans2;
    }
};
