class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> marked(26,0);
        string ans = "";

        for(char c : s)
        {
            marked[c-'a']++;
        }

        for(char c : order)
        {
            while(marked[c-'a']>0) {
                ans += c;
                marked[c-'a']--;
            }
        }

        for(char c : s)
        {
            if(marked[c-'a']>0) {
                ans += c;
                marked[c-'a']--;
            }
        }

        return ans;
    }
};
