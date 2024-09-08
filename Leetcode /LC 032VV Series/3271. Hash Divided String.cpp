class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.length();
        string ans = "";
        int sum = 0; 

        for(int i=0;i<n;i++)
        {
            sum += (s[i]-'a');
            if((i+1)%k==0) {
                ans += (sum%26+'a');
                sum = 0;
            }
        }

        return ans;
    }
};
