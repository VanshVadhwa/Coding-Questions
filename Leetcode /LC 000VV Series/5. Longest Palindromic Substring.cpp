class Solution {
private:
    pair<int,int> expandAroundCentre(string& s, int left, int right) {
        while(left >= 0 && right < s.length() && s[left]==s[right]) {
            left -= 1;
            right += 1;
        }
        return {left+1,right-1};
    }
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0, maxLen = 0;

        for(int i=0;i<n;i++) {
            // odd length - centre at i
            auto[l1,r1] = expandAroundCentre(s,i,i);
            if(r1-l1+1 > maxLen) {
                start = l1, maxLen = r1-l1+1;
            }

            // even length - centre as i and i+1
            auto[l2,r2] = expandAroundCentre(s,i,i+1);
            if(r2-l2+1 > maxLen) {
                start = l2, maxLen = r2-l2+1;
            }
        }

        return s.substr(start,maxLen);
    }
};
