//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int, int> map;
        int sum = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == 0) {
                ans = i + 1;
            }

            if (map.find(sum) != map.end()) {
                int length = i - map[sum];
                ans = max(ans, length);
            }
            else {
                map[sum] = i;
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
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
