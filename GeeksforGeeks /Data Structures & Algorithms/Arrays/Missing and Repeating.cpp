//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        //brute force
        sort(arr.begin(), arr.end());
        
        int missing = n, repeat = 0;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i] == arr[i-1]) {
                repeat = arr[i];
                arr.erase(arr.begin()+i);
                break;
            }
        }
        
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] != i+1) {
                missing = i+1;
                break;
            }
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

// Link: https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
