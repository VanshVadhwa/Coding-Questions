class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n = s.length();
        vector<bool> vowels(26,false);

        for(int i=0;i<26;i++) {
            vowels['a'-'a'] = true;
            vowels['e'-'a'] = true;
            vowels['i'-'a'] = true;
            vowels['o'-'a'] = true;
            vowels['u'-'a'] = true;
        }

        int ans = 0;

        for(int i=n;i>0;i--)
        {
            for(int j=0;j<=n-i;j++)
            {
                string temp= s.substr(j,i);
                unordered_map<char,int> map;
                
                for(char c : temp) {
                    if(vowels[c-'a']==true) {
                        map[c]++;
                    }
                }

                bool flag = true;
                for(auto pair : map) {
                    if(pair.second%2!=0) {
                        flag = false;
                        break;
                    }
                }

                if(flag) {
                    return i;
                }
            }
        }

        return ans;
    }
};
