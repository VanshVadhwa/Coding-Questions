class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;

        for(string& s : strs) {
            string key = "";
            int count[26] = {0};
            for(char& c : s) {
                count[c-'a']++;
            }
            for(int i=0;i<26;i++) {
                key += to_string(count[i]) + '#';
            }
            map[key].push_back(s);
        }

        vector<vector<string>> ans(map.size());
        int index = 0;
        for(auto& pair : map) {
            ans[index++] = pair.second;
        }

        return ans;
    }
};
