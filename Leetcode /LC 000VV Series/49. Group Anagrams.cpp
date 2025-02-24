class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> map;

        for(string words : strs) {
            vector<int> marked(26,0);
            for(char c : words) marked[c-'a']++;
            string key = "";
            for(int count : marked) key += '#'+to_string(count);
            map[key].push_back(words);
        }

        vector<vector<string>> ans;
        for(auto pair : map) {
            ans.push_back(move(pair.second));
        }

        return ans;
    }
};
