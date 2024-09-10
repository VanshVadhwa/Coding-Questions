//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  private:
    void reverse(string& s, int left, int right) {
        //base case
        if(left >= right) {
            return;
        }
        
        char c = s[left];
        s[left] = s[right];
        s[right] = c;
        
        reverse(s,left+1,right-1);
    }
  public:
    string revStr(string s) {
        // code here
        reverse(s,0,s.size()-1);
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.revStr(s) << endl;
    }
    return 0;
}

// } Driver Code Ends
