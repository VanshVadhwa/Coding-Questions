class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> map;
        stringstream ss(s1 + " " + s2);
        string word = "";

        while(ss >> word) {
            map[word]++;
        }

        vector<string> ans;
        for(auto pair : map) {
            if(pair.second==1) {
                ans.push_back(pair.first);
            }
        }

        return ans;
    }
};
