#include<iostream>
using namespace std;

int mySqrt(int n) {
        if(n<2) {
            return n;
        }
        int start = 0;
        int end = n;
        int ans = 0;

        while(start <= end) {
            int mid = start + (end-start)/2;

            if(mid == n/mid) {
                return mid;
            }

            else if(mid < n/mid) {
                ans = mid;
                start = mid+1;
            }

            else {
                end = mid-1;
            }
        }
        return ans;
    }

int main()
{
    int n;
    cin >> n;
    int ans = mySqrt(n);
    cout << ans << endl;
    return 0;
}