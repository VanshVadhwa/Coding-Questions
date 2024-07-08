//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
    private:
    int maximum(vector<int> arr, int n) {
        int largest = 0;
        for(int i=0;i<n;i++) {
            largest = max(largest, arr[i]);
        }
        return largest;
    }
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        if(n==1) return -1;
        int largest = maximum(arr, n);
        int ans = 0;
        for(int i=0;i<n;i++) {
            if(arr[i]!=largest) {
                ans = max(arr[i], ans);
            }
        }
        if(ans) return ans;
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
