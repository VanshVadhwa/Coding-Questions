class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int mod = 1e9 + 7, ans = 0;
        vector<long long> seen(26,0);

        for(char c : s) {
            seen[c-'a']++;
        }

        for(int i=0;i<t;i++) {
            vector<long long> temp(26,0);
            for(int i=0;i<26;i++) {
                if(seen[i] == 0) continue;

                if(i==25) {
                    temp[0] = (temp[0] + seen[i])%mod;
                    temp[1] = (temp[1] + seen[i])%mod;
                }

                else {
                   temp[i+1] = (temp[i+1]+seen[i])%mod;
                }
            }

            seen = temp;
        }

        for(int i=0;i<26;i++) {
            ans = (ans+seen[i])%mod;
        }

        return ans;
    }
};
