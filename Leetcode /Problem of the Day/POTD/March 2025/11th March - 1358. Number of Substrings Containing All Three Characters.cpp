class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int left = 0, ans = 0;
        int a = 0, b = 0, c = 0;

        for(int right=0;right<n;right++) {
            if(s[right]=='a') a += 1;
            if(s[right]=='b') b += 1;
            if(s[right]=='c') c += 1;

            while(a>0 && b>0 && c>0) {
                ans += (n-right);
                if(s[left]=='a') a -= 1;
                if(s[left]=='b') b -= 1;
                if(s[left]=='c') c -= 1;
                left += 1;
            }
        }

        return ans;
    }
};
