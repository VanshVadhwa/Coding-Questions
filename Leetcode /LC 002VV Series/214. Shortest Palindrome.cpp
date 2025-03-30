class Solution {
public:
    string shortestPalindrome(string str) {
        string rev = str;
        reverse(rev.begin(),rev.end());
        string s = str + '$' + rev;

        int n = s.length();
        vector<int> lps(n,0);

        int pre = 0, suff = 1;
        while(suff < n) {
            if(s[suff] == s[pre]) {
                lps[suff++] = pre+1;
                pre++;
            }
            else {
                if(pre==0) {
                    suff++;
                }
                else {
                    pre = lps[pre-1];
                }
            }
        }

        return rev.substr(0,str.size()-lps.back()) + str;
    }
};
