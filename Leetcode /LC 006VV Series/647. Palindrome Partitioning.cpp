class Solution {
private:
    void solve(string& s, int i, int j, int& ans) {
        while(i>=0 && j<s.length() && s[i]==s[j]) {
            ans += 1;
            i--;
            j++;
        }
    }
public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0;i<s.length();i++) {
            solve(s,i,i,ans);
            solve(s,i,i+1,ans);
        }
        return ans;
    }
};
