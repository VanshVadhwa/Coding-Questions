//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    void toLowerCase(string& s, int index)
    {
        //base case
        if(index==-1) {
            return;
        }
        
        if(s[index]-'Z'<=0) {
            s[index] = s[index]-'A'+'a';
        }
        
        toLowerCase(s,index-1);
    }
  public:
    string toLower(string s) {
        // code here
        toLowerCase(s,s.size()-1);
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.toLower(s) << endl;
    }
    return 0;
}

// } Driver Code Ends
