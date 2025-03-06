class Solution {
private:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int ans = 0, count = 0, left = 0;

        for(int i=0;i<n;i++) {
            if(isVowel(s[i])) count++;
            if(i >= k-1) {
                ans = max(ans,count);
                if(isVowel(s[left++])) count -= 1;
            }
        }

        return ans;
    }
};
