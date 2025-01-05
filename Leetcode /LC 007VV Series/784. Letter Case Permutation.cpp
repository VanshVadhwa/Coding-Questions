class Solution {
private:
    void sub(string s, vector<string>& ans, int index, string& temp) {
        if(index==s.size()) {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(s[index]);
        sub(s,ans,index+1,temp);
        temp.pop_back();

        if(isalpha(s[index])) {
            temp.push_back(islower(s[index]) ? toupper(s[index]) : tolower(s[index]));
            sub(s,ans,index+1,temp);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp;
        sub(s,ans,0,temp);
        return ans;
    }
};
