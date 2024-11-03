class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int rows = knowledge.size();
        string ans = "";

        unordered_map<string,string> map;
        for(int i=0;i<rows;i++) {
            map[knowledge[i][0]] = knowledge[i][1]; 
        }

        int n = s.length();
        for(int i=0;i<n;i++) {
            if(s[i]=='(') {
                string temp = "";
                i++;
                while(s[i]!=')') {
                    temp += s[i]; 
                    i++;
                }
                ans += map.find(temp) != map.end() ? map[temp] : "?";
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};
