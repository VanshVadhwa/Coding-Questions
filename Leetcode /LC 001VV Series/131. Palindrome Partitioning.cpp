class Solution {
private:
    bool isPal(string& s, int start, int end) {
        while(start < end) {
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }

    void backtrack(string& s, int index, vector<vector<string>>& ans, vector<string>& temp) {
        if(index==s.length()) {
            ans.push_back(temp);
            return;
        }

        for(int i=index;i<s.length();i++) {
            if(isPal(s,index,i)) {
                temp.push_back(s.substr(index,i-index+1));
                backtrack(s,i+1,ans,temp);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        backtrack(s,0,ans,temp);
        return ans;
    }
};
