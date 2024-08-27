class Solution {
    public int countDigits(int num) {
        int temp = num;
        int count = 0;

        while(temp > 0)
        {
            if(num%(temp%10)==0) {
                count++;
            }
            temp /= 10;
        }
        return count;
    }
}
