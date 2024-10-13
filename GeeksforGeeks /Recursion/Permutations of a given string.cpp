//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
private:
    void permute(string& s, set<string>& ans, int index) {
        if(index==s.size()) {
            ans.insert(s);
            return;
        }
        for(int i=index;i<s.size();i++) {
            swap(s[i],s[index]);
            permute(s,ans,index+1);
            swap(s[i],s[index]);
        }
    }
        
public:
	vector<string>find_permutation(string S)
	{
	    // Code here there
	    set<string> st;
	    permute(S,st,0);
	    vector<string> ans(st.begin(),st.end());
	    return ans;
	}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
