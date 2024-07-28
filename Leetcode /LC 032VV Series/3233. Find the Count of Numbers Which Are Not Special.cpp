class Solution {
private:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }

    int countSpecialNumbers(long long l, long long r) {
        int specialcount = 0;
        for (int p = 2; p * p <= r; ++p) {
            if (isPrime(p)) {
                long long square = static_cast<long long>(p) * p;
                if (square >= l && square <= r) {
                    specialcount++;
                }
            }
        }
        return specialcount;
    }
public:
    int nonSpecialCount(int l, int r) {
        long long totalcount = r - l + 1; 
        int specialcount = countSpecialNumbers(l, r); 
        return totalcount - specialcount;
    }
};
