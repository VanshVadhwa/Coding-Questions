class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int B = __builtin_popcount(num2);
        bitset<31> y = num1, x = 0;

        for(int i=30;B>0 && i>=0;i--) {
            if(y[i]) {
                x[i] = 1;
                B--;
            }
        }

        for(int i=0;i<=30 && B>0;i++) {
            if(x[i]==0) {
                x[i] = 1;
                B--;
            }
        }

        return x.to_ulong();
    }
};
