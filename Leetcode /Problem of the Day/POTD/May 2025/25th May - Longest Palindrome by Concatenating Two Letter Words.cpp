class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> map;
        for(string& str : words) {
            map[str]++;
        }

        int ans = 0;
        bool flag = false;

        for(auto& [word,freq] : map) {
            string rev = word;
            swap(rev[0],rev[1]);

            if(rev != word) {
                if(map.count(rev)) {
                    int pairs = min(freq,map[rev]);
                    ans += pairs*4;
                    map[rev] = map[word] = 0;
                }
            }
            else {
                ans += (freq/2)*4;
                if(freq%2==1) flag = true;
                map[word] = 0;
            }
        }

        return flag ? ans + 2 : ans;
    }
};
