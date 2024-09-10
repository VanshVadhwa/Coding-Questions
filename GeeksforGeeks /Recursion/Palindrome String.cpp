//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
    int checkPalindrome(string s, int left, int right)
    {
        //base case
        if(left >= right) {
            return 1;
        }
        
        if(s[left]!=s[right]) {
            return 0;
        }
        
        return checkPalindrome(s,left+1,right-1);
    }
public:	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return checkPalindrome(S,0,S.size()-1);
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
