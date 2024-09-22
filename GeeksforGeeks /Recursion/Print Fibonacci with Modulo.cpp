//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    void fibonacci(vector<int>& arr, long long a, long long b, int n, int modulo)
    {
        if(n==-1) {
            return;
        }
        arr.push_back(a%modulo);
        fibonacci(arr,b,(a+b)%modulo,n-1,modulo);
    }
  public:
    vector<int> Series(int n) {
        // Code here
        int mod = 1e9 + 7;
        long long a = 0;
        long long b = 1;
        vector<int> ans;
        fibonacci(ans,a,b,n,mod);
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
