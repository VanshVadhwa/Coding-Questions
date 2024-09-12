class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> marked(26,false);

        for(char c : allowed) {
            marked[c-'a'] = true;
        }

        int ans = 0;

        for(int i=0;i<words.size();i++)
        {
            bool flag = false;
            for(int j=0;j<words[i].size();j++) {
                if(marked[words[i][j]-'a']==false) {
                    flag = true;
                    break;
                }
            }
            if(!flag) ans++;
        }

        return ans;
    }
};
