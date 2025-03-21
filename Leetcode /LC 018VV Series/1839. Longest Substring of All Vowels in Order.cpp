class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n = word.length();
        int left = 0, ans = 0, count = 1;

        for(int right=1;right<n;right++) {
            if(word[right] != word[right-1]) {
                if(word[right] > word[right-1]) {
                    count += 1;
                }
                else {
                    left = right;
                    count = 1;
                }
            }

            if(count==5) ans = max(ans,right-left+1);
        }

        return ans;
    }
};
