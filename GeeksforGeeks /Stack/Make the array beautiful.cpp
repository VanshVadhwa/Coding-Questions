//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        
        for(int i=0;i<n;i++) {
            if(st.empty()) {
                st.push(arr[i]);
            }
            else if((st.top()<0 && arr[i]>=0) || (st.top()>=0 && arr[i]<0)) {
                st.pop();
            }
            else {
                st.push(arr[i]);
            }
        }
        
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--) {
            ans[i] = st.top();
            st.pop();
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
