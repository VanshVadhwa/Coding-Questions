class Solution {
    public boolean lemonadeChange(int[] bills) {
        int n = bills.length;
        int count_5=0,count_10=0,count_20=0;

        for(int i=0;i<n;i++)
        {
            if(bills[i]==5) {
                count_5 += 1;
            }
            if(bills[i]==10) {
                count_10 += 1;
                if(count_5 < 1) return false;
                else count_5 -= 1;
            }
            if(bills[i]==20)
            {
                count_20 += 1;
                if(count_5 >=1 && count_10 >= 1) {
                    count_5 -= 1;
                    count_10 -= 1;
                }
                else if(count_5 >= 3) {
                    count_5 -= 3;
                }
                else return false;
            }

        }
        return true;
    }
}
