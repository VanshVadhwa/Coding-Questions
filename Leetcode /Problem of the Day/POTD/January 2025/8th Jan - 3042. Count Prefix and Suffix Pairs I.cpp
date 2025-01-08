class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(words[j].starts_with(words[i]) && words[j].ends_with(words[i])) ans++;
            }
        }

        return ans;
    }
};
