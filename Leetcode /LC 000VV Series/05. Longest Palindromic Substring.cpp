class Solution {
private:
    int expandAroundCentre(string& s, int left, int right) {
        while(left >= 0 && right < s.length() && s[left]==s[right]) {
            left--,right++;
        }
        return right-left-1;
    }
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n<=1) return s;
        int start = 0, maxLen = 0;

        for(int i=0;i<n;i++) {
            //for even, the space between the chars is the middle, not the chars itself
            int len1 = expandAroundCentre(s,i,i);
            // for odd, the character itself is the middle point
            int len2 = expandAroundCentre(s,i,i+1);
            int currLen = max(len1,len2);

            if(currLen > maxLen) {
                maxLen = currLen;
                start = i-(currLen-1)/2;
            }
        }

        return s.substr(start,maxLen);
    }
};
