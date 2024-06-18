class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start = 0;
        long long end = sqrt(c);

        while(start<=end) {
            long long n = start*start;
            long long m = end*end;
            if(m + n == c) {
                return true;
            }
            if(m + n < c) {
                start++;
            }
            if(m + n > c) {
                end--;
            } 
        }
        return false;
    }
};
