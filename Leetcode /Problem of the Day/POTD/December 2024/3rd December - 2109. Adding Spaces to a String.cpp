class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int n = s.length();
        int index = 0;

        for(int i=0;i<s.length();i++) {
            if(index < spaces.size() && i != spaces[index]) {
                ans += s[i];
            }
            else {
                if(index < spaces.size())
                ans += 32;
                ans += s[i];
                index++;
            }
        }
        

        return ans;
    }
};
