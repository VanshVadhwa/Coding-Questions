class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        ans += s[0];
        int n = s.length();
        int count = 1;

        for(int i=1;i<n;i++) {
            if(s[i]==s[i-1]) {
                count++;
            }
            else {
                count = 1;
            }
            if(count<3) {
                ans += s[i];
            }
        }

        return ans;
    }
};
