class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;

        for(int i=low;i<=high;i++)
        {
            if(i>10 && i/100==0) {
                ans += (i%10 == i/10) ? 1 : 0;
            }
            if(i>100 && i<1000) i=1000;
            if(i>1000) {
                ans += ((i%100)/10+(i%100)%10==(i/100)%10+(i/100)/10) ? 1 : 0;
            }
        }

        return ans;
    }
};
