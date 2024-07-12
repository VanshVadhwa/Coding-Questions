//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
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
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
