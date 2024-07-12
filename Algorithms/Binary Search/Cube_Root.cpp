#include<iostream>
using namespace std;

int cubeRoot(int N) {
        // code here
        if(N<8) {
            return 1;
        }
        int start = 0;
        int end = N;
        int ans = 0;
        
        while(start <= end) 
        {
            int mid = start + (end-start)/2;
            // int cube = mid*mid*mid;
            
            if(mid == N/(mid*mid)) {
                return mid;
            }
            else if(mid < N/(mid*mid)) {
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
    int ans = cubeRoot(n);
    cout << ans << endl;
    return 0;
}