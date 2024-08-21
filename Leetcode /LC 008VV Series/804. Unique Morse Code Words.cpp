class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> s = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> set;

        for(int i=0;i<words.size();i++) {
            string morse = "";
            for(int j=0;j<words[i].size();j++) {
                morse += s[words[i][j]-'a'];
            }
            set.insert(morse);
        }

        return set.size();
    }
};
