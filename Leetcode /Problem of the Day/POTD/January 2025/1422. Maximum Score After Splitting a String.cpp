class Solution {
// O(n) time with with two traversals, and O(1) space with three int variables
private:
    int count(string s) {
        int ans = 0;
        for(char c : s) {
            if(c == '1') ans += 1;
        }
        return ans;
    }
public:
    int maxScore(string s) {
        int count0 = 0;
        int count1 = count(s);
        int ans = 0;

        for(int i=1;i<s.length();i++) 
        {
            if(s[i-1]=='0') count0 += 1;
            if(s[i-1]=='1') count1 -= 1;
            ans = max(ans,count0+count1);
        }

        return ans;
    }
};