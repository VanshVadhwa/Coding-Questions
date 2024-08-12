class Solution {
public:
    string longestPrefix(string s) {
        int n = s.length();
        vector<int> lps(n,0);
        int pre = 0, suf = 1;

        while(suf < n)
        {
            if(s[suf]==s[pre])
            {
                lps[suf] = pre+1;
                pre++;
                suf++;
            }
            else
            {
                if(pre==0)
                {
                    lps[suf] = 0;
                    suf++;
                }
                else 
                {
                    pre = lps[pre-1];
                }
            }
        }
        return s.substr(0, lps[n-1]);
    }
};
