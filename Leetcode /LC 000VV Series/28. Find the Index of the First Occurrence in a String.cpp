class Solution {
void buildLPS(vector<int>& lps, string s) {
    int n = s.length();
    int pre = 0, suff = 1;
    while(suff < n) {
        if(s[suff]==s[pre]) {
            lps[suff++] = 1 + pre++;
        }
        else {
            if(pre==0) suff++;
            else pre = lps[pre-1];
        }
    }
}
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length(), n = needle.length();
        int first = 0, second = 0;
        vector<int> lps(n,0);
        buildLPS(lps,needle);

        while(first < h && second < n) {
            if(haystack[first] == needle[second]) {
                first++;
                second++;
            }
            else {
                if(second==0) first++;
                else second = lps[second-1];
            }
            if(second==n) return first-second;
        }

        return -1;
    }
};
