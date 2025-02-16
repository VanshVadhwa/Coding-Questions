class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n = s.length();
        if(n==1) return true;
        int count = 1;

        if (k == 1) {
            for (int i = 0; i < n; i++) {
                bool left = (i == 0) ? true : (s[i] != s[i - 1]);
                bool right = (i == n - 1) ? true : (s[i] != s[i + 1]);
                if (left && right) return true;
            }
            return false;
        }
        
        for(int i=1;i<n;i++) {
            if(s[i] == s[i-1]) count += 1;
            else count = 1;
            
            if(count == k) {
                bool left = (i - k >= 0) ? (s[i] != s[i - k]) : true;
                bool right = (i + 1 < n) ? (s[i] != s[i + 1]) : true;

                if (left && right) return true;
            }
        }
        
        return false;
    }
};
