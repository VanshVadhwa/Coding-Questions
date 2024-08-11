//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here  
        int len = str.length();
        int diff = 0;
        vector<int>alpha(256, 0);
        
        //unique length
        for(int i=0;i<len;i++)
        {
            if(alpha[str[i]]==0) diff++;
            alpha[str[i]]++;
        }
        
        for(int i=0;i<256;i++) alpha[i]=0;
        
        int first = 0, second = 0;
        
        while(second < str.size())
        {
            //jab tak diff 0 na ho
            while(diff && second < str.size())
            {
                if(alpha[str[second]]==0)
                {
                    diff--;
                }
                alpha[str[second]]++;
                second++;
            }
            len = min(len, second-first);
            
            //jab tak didd 1 na ban jaaye
            while(diff!=1)
            {
                len = min(len, second-first);
                alpha[str[first]]--;
                
                if(alpha[str[first]]==0) diff++;
                first++;
            }
        }
        return len;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends
