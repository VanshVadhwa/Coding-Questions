class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string,int> map;

        for(string str : bannedWords) {
            map[str]++;
        }
        
        int count = 0;
        for(string str : message) {
            if(map[str]>0) {
                count++;
                if(count==2) return true;
                // map[str]=0;
            }
        }

        return false;
    }
};
