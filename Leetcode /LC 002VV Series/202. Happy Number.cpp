class Solution {
private:
    int nextNum(int n) {
        int ans = 0;
        while(n > 0) {
            ans += (n%10)*(n%10);
            n /= 10;
        }
        return ans;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = nextNum(n);
        while(fast != 1 && slow != fast) {
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
        }

        return fast==1;
    }
};
