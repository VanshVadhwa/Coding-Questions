//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length() != str2.length()) return false;
        int n = str1.length();
        
        bool flag = true;
        
        
        //anti-clockwise
        for(int i=0;i<n-2;i++)
        {
            if(str1[i+2]!=str2[i]) flag = false;
        }
        if(flag)
        {
            return (str1[0]==str2[n-2] && str1[1]==str2[n-1]);
        }
        
        //clockwise
        if(!flag)
        {
            for(int i=0;i<n-2;i++)
            {
                if(str1[i]!=str2[i+2]) flag = true;
            }
        }
        
        if(flag) return false;
        else {
            return (str1[n-2]==str2[0] && str1[n-1]==str2[1]);
        }
        return true;
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
