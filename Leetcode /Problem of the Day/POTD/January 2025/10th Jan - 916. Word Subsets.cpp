class Solution {
private:
    bool isPresent(string& s, vector<int> marked) {
        for(char c : s) {
            marked[c-'a']--;
        }
        for(int i=0;i<26;i++) {
            if(marked[i]>0) return false;
        }
        return true;
    }
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> marked(26,0);
        for(string s : words2) {
            vector<int> temp(26,0);
            for(char c : s) {
                temp[c-'a']++;
                marked[c-'a'] = max(marked[c-'a'],temp[c-'a']);
            }
        }

        vector<string> ans;
        for(string s : words1) {
            if(isPresent(s,marked)) {
                ans.push_back(s);
            }
        }

        return ans;
    }
};
