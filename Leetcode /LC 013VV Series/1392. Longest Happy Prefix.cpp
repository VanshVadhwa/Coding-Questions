class Solution {
public:
    string longestPrefix(string s) {
        int n = s.length();
        vector<int> lps(n,0);
        int pref = 0;
        int suff = 1;
        while(suff < n)
        {
            if(s[suff]==s[pref]) {
                lps[suff] = pref+1;
                suff++;
                pref++;
            }
            else {
                if(pref==0) {
                    lps[suff] = 0;
                    suff++;
                }
                else {
                    pref = lps[pref-1];
                }
            }
        }
        return s.substr(0,lps[n-1]);
    }
};
