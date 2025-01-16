class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int wordLen = words[0].size();
        int totalLen = words.size() * wordLen;

        unordered_map<string,int> map;

        for(string str : words) {
            map[str]++;
        }

        vector<int> ans;
        for(int i=0;i<wordLen;i++) {
            unordered_map<string,int> seen;

            int left = i, right = i, count = 0;
            while(right + wordLen <= s.length())
            {
                string word = s.substr(right,wordLen);
                right += wordLen;

                if(map.find(word) != map.end()) {
                    seen[word]++;
                    count++;

                    while(seen[word] > map[word]) {
                        string leftWord = s.substr(left,wordLen);
                        seen[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if(count == words.size()) {
                        ans.push_back(left);
                    }
                }

                else {
                    seen.clear();
                    left = right;
                    count = 0;
                }
            }
        }

        return ans;
    }
};
