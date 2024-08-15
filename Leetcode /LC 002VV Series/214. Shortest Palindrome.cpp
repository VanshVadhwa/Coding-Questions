class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        string ans = s + '$' + rev;

        int n = ans.length();

        vector<int> lps(n,0);
        int pref = 0, suff = 1;

        while(suff < n)
        {
            if(ans[pref] == ans[suff])
            {
                lps[suff] = pref+1;
                suff++;
                pref++; 
            }
            else
            {
                if(pref == 0)
                suff++;

                else 
                {
                    pref = lps[pref-1];
                }
            }
        }
        return rev.substr(0, s.size()-lps.back()) + s;
    }
};
