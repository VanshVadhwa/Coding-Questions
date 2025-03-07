class Solution {
private:
    bool isPrime(int n) {
        if(n==1) return false;
        if(n==2 || n==3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5;i*i<=n;i+=6) {
            if((n%i==0) || (n%(i+2)==0)) return false;
        } 
        return true;
    }
public:
    vector<int> closestPrimes(int left, int right) {
        int first = 0, second = 0, ans = INT_MAX;
        int firstIndex = 0, secondIndex = 0;

        int i=left;
        for(;i<=right;i++) {
            if(isPrime(i)) {
                firstIndex = i;
                first = i;
                break;
            }
        }

        for(;i<=right;i++) {
            if(isPrime(i)) {
                if(i-first == 2 || i-first==1) return {first,i};
                firstIndex = first;
                secondIndex = i;
                first = i;
            }
        }

        if(!firstIndex || !secondIndex || (firstIndex==secondIndex)) return {-1,-1};
        return {firstIndex,secondIndex};
    }
};
