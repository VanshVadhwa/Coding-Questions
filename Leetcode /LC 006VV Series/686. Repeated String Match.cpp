class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int m = a.length(), n = b.length();
        int length = (m+n-1)/m;
        string ans = "";

        for(int i=0;i<length;i++)
        {
            ans += a;
        }

        if(ans.find(b)==string::npos) {
            ans += a;
            length++;
        }

        if(ans.find(b) != string::npos) {
            return length;
        }
        return -1;
    }
};
