//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


void LowerToUpper(string& s, int index)
{
    //base case
    if(index==-1) {
        return;
    }
    
    s[index] = s[index]-'a'+'A';
    
    LowerToUpper(s,index-1);
}

string to_upper(string str){
    //code
    LowerToUpper(str,str.length()-1);
    return str;
}
