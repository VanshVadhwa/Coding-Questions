//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
    void bin(int n, int ones, int zeroes, string& temp, vector<string>& ans)
    {
        //base case
        if(ones+zeroes==n) {
            ans.push_back(temp);
            return;
        }
        
        //1 include
        temp.push_back('1');
        bin(n,ones+1,zeroes,temp,ans);
        temp.pop_back();
        
        //0 include
        if(zeroes<ones) {
            temp.push_back('0');
            bin(n,ones,zeroes+1,temp,ans);
            temp.pop_back();
        }
    }
    
public:	
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    string temp;
	    vector<string> ans;
	    bin(n,0,0,temp,ans);
	    return ans;
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
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
