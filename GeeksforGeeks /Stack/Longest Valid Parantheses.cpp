//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        int n = s.length();
        stack<int> st;
        st.push(-1);
        int max_len = 0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') {
                st.push(i);
            }
            else {
                st.pop();
                if(st.empty()) st.push(i);
                else {
                    max_len = max(i-st.top(),max_len);
                }
            }
        }
        
        return max_len;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends
