class Solution {
public:
    int findComplement(int num) {
        long long ans = 0;
        long long base = 1;
        int rem = 0;

        while(num)
        {
            rem = num%2;
            rem = rem^1;
            ans = base*rem+ans;
            base = base*2;
            num /= 2;
        }

        return ans;
    }
};
