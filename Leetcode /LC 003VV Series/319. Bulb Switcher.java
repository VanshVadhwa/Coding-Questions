class Solution {
    public int sqrt(int n) {
        int start = 0, end = 1000000000;
        int ans = 0;

        while(start <= end) {
            int mid = start + (end-start)/2;
            long midSquare = (long) mid*mid;

            if(midSquare==n) {
                return mid;
            }
            else if(midSquare<n) {
                ans = mid;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
    }
    public int bulbSwitch(int n) {
        return sqrt(n);
    }
}
