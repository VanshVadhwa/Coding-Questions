//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    void clockwiseRotate(string& s) {
        int n = s.length();
        int temp = s[n-1];
        for(int i=n-1;i>0;i--) {
            s[i] = s[i-1];
        }
        s[0] = temp;
    }
    void antiClockwiseRotate(string& s) {
        int n = s.length();
        int temp = s[0];
        for(int i=0;i<n-1;i++) {
            s[i] = s[i+1];
        }
        s[n-1] = temp;
    }
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string str1Clock = str1;
        clockwiseRotate(str1);
        clockwiseRotate(str1);
        if(str1==str2) return true;
        
        antiClockwiseRotate(str1Clock);
        antiClockwiseRotate(str1Clock);
        if(str1Clock == str2) return true;
        
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
