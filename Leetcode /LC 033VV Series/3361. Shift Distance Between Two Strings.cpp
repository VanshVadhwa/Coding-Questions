class Solution {
public:
    long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
        long long ans = 0;
        int n = s.length();

        for(int i=0;i<n;i++) {
            int s_char = s[i]-'a';
            int t_char = t[i]-'a';

            // calculating forward distance
            int distance = (t_char-s_char + 26) % 26;
            long long forwardCost = 0;
            int pos = s_char;
            for(int i=0;i<distance;i++) {
                forwardCost += nextCost[pos];
                pos = (pos+1)%26;
            }

            //calculating backward distance
            long long backCost = 0;
            distance = (s_char-t_char+26)%26;
            pos = s_char;
            for(int i=0;i<distance;i++) {
                backCost += previousCost[pos];
                pos = (pos-1+26)%26;
            }

            ans += min(forwardCost,backCost);
        }

        return ans;
    }
};
