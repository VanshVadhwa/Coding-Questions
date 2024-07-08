//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    void solve(string& s, int index, int size, string& temp, vector<string>& ans) {
        if(index>=size) {
            if(!temp.empty()) {
                ans.push_back(temp);
            }
            return;
        }
        
        //exclude
        solve(s, index+1, size, temp, ans);
        
        //include
        temp.push_back(s[index]);
        solve(s, index+1, size, temp, ans);
        temp.pop_back();
    }
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    string temp;
		    int size = s.length();
		    int index = 0;
		    solve(s, index, size, temp, ans);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
