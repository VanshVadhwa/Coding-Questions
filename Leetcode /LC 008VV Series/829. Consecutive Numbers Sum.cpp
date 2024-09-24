class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;
        for(int k=1;k*k<2*n;k+=1) {
            if((n-k*(k-1)/2)%k==0) {
                count+=1;
            }
        }
        return count;
    }
};
