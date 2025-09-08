class Solution {
private:
    bool isValid(int n) {
        while(n > 0) {
            if(n%10==0) return false;
            n /= 10;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=n-1;i>=n/2-1;i--) {
            if(isValid(i) && isValid(n-i)) return {i,n-i};
        }
        return {-1,-1};
    }
};
