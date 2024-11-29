//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        
        stack<int> st;
        vector<int> RSA(n,0);
        
        for(int i=0;i<n;i++) {
            while(!st.empty() && arr[i]<arr[st.top()]) {
                RSA[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        
        stack<int> st2;
        vector<int> LSA(n,0);
        for(int i=n-1;i>=0;i--) {
            while(!st2.empty() && arr[i]<arr[st2.top()]) {
                LSA[st2.top()] = arr[i];
                st2.pop();
            }
            st2.push(i);
        }
        
        int ans = 0;
        for(int i=0;i<n;i++) {
            ans = max(ans,abs(RSA[i]-LSA[i]));
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string input;
        getline(cin, input);
        stringstream s2(input);

        vector<int> arr;
        int num;

        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
