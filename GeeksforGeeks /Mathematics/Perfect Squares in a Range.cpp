//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int numOfPerfectSquares(int a, int b) {
        // code here
        int sqrtA = sqrt(a);
        int sqrtB = sqrt(b);
        int squareRootA = (sqrtA*sqrtA==a) ? sqrtA : sqrtA+1;
        return sqrtB-squareRootA+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.numOfPerfectSquares(a,b) << endl;
    }
    return 0;
}
// } Driver Code Ends
