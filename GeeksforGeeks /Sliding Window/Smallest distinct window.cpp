//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findSubString(string& s) {
        // Your code goes here
        vector<int> v(128,0);
        int unique = 0;
        for(char c : s) {
            v[c]++;
            if(v[c]==1) unique++;
        }
        
        vector<int> marked(128,false);
        int ans = INT_MAX;
        int start = 0;
        int elements = 0;
        
        for(int end=0;end<s.length();end++)
        {
            marked[s[end]]++;
            if(marked[s[end]]==1) elements++; // 1
            
            // A A B B B C
            while(elements==unique)
            {
                ans = min(ans,end-start+1);
                marked[s[start]]--;
                if(marked[s[start]]==0) elements--;
                start++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
//   Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
