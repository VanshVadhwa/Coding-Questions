class Solution {
    private:

    bool isPalindrome(int n)
    {
        string str = to_string(n);
        string temp = str;
        reverse(str.begin(), str.end());
        return str == temp;
    }

    bool isPrime(int n){
        if(n <= 1) return false;
        if(n==2 || n==3) return true;
        if(n%2==0 || n%3==0) return false;

        for(int i=5; i*i<=n; i+=6){
            if(n%i ==0 || n%(i+2)==0)
                return false;
        }

        return true;
    }

public:
    int primePalindrome(int n) {
        while(true){
            if(isPrime(n) && isPalindrome(n)){
                return n;
            }
            n++;
            if(10000000<n && n<100000000)
                n = 100000000;
        }
        return n;
    }
};
