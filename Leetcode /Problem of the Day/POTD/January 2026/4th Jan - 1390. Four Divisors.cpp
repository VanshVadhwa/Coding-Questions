class Solution {
    using ll = long long;
private:
    bool isPrime(int n) {
        if(n==2 || n==3 || n==5 || n==7) return true;
        if(n%2==0 || n%3==0 || n%5==0 || n%7 == 0) return false;

        for(int i=11;i*i<=n;i+=6) {
            if((n%i==0) || (n%(i+2)==0)) return false;
        }

        return true;
    }

    // cube root form
    int isFormA(int n) {
        if(n <= 7) return -1;
        int start = 1, end = 10000;

        while(start <= end) {
            ll mid = start + (end-start)/2;
            ll mul = mid*mid*mid;
            if(mul == n && isPrime(mid)) return mid;
            else if(mul < n) start = mid+1;
            else end = mid-1; 
        }

        return -1;
    }

    // p*q criteria
    int isFormB(int n) {
        for (int i=2; 1LL*i*i<=n; i++) {
            if (n % i == 0) {
                int a = i;
                int b = n / i;
                if (a != b && isPrime(a) && isPrime(b))
                    return a;
                return -1;
            }
        }
        return -1;
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int& num : nums) {
            int b = isFormB(num);
            if(b != -1) {
                ans += (b + num/b + num + 1);
            }
            else {
                int a = isFormA(num);
                if(a != -1) {
                    ans += (a + a*a + a*a*a + 1);
                }
            }
        }

        return ans;
    }
};
