#include <bits/stdc++.h> 

void subsets(string& str, int index, int n, vector<string>& ans, string& temp) {
		  //base case
			if (index == n) {
				if(temp!="")
				ans.push_back(temp);
				return;
			}

			// not include
			subsets(str, index + 1, n, ans, temp);
			// include
			temp.push_back(str[index]);
			subsets(str, index + 1, n, ans, temp);
			// backtrack
			temp.pop_back();
}

vector<string> subsequences(string str){
	// Write your code here
	vector<string> ans;
	string temp;
	int n = str.length();
	subsets(str,0,n,ans,temp);
	return ans;
}
