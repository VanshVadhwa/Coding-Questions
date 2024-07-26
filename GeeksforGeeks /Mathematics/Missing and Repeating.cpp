//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        for(int i=0;i<n;i++)
        arr[i]--;
        
        for(int i=0;i<n;i++)
        arr[arr[i]%n] += n;
        
        int missing = 0, repeat = 0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]/n==2) repeat = i+1;
            if(arr[i]/n==0) missing = i+1;
        }
        
        return {repeat, missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
