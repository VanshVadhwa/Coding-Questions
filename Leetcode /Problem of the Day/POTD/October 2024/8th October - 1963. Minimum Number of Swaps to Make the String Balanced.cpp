class Solution {
public:
    int minSwaps(string s) {
        int n = s.length();
        int ans = 0;

        for(char c : s)
        {
            if(c=='[') {
                ans++;
            }
            else if(ans > 0 && c==']') {
                ans--;
            }
        }
        return (ans+1)/2;
    }
};
