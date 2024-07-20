//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        // Your Code Here
        sort(arr, arr+n);
        int ans = 0;
        
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                ans = x - (arr[i]+arr[j]);
                
                int start = j+1, end = n-1;
                
                while(start <= end)
                {
                    int mid = start + (end-start)/2;
                    
                    if(arr[mid]==ans) {
                        return 1;
                    }
                    if(arr[mid]<ans) {
                        start = mid+1;
                    }
                    else {
                        end = mid-1;
                    }
                }
            }
        }
         return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
