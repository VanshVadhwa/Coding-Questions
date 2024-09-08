//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int modulo = 1e9 + 7;
        vector<int> ans(n+1);
        
        ans[0] = 0;
        ans[1] = 1;
        
        for(int i=2;i<=n;i++) {
            ans[i] = (ans[i-1]+ans[i-2])%modulo;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
