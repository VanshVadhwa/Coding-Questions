class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];

        int i = 0;
        for(;i<s1.length();i++) 
        {
            if(s1[i]!=s2[i]) {
                break;
            }
        }
        return s1.substr(0,i);
    }
};
