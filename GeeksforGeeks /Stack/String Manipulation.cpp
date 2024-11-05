//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        int n = arr.size();
        stack<string> st;
        
        for(int i=0;i<n;i++) {
            if(st.empty()) {
                st.push(arr[i]);
            }
            else if(st.top()==arr[i]) {
                st.pop();
            }
            else {
                st.push(arr[i]);
            }
        }
        
        return st.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline character after the integer input
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<string> arr;
        string s;
        while (ss >> s) {
            arr.push_back(s);
        }
        Solution ob;
        cout << ob.removeConsecutiveSame(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends
