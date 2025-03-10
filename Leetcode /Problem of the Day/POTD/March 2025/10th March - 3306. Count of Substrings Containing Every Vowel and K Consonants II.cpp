class Solution {
private:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
public:
    long long atLeastK(string& s, int k) {
        int n = s.length();
        long long ans = 0;
        unordered_map<char,int> map;
        int left = 0, count = 0;

        for(int right=0;right<n;right++) {
            if(isVowel(s[right])) {
                map[s[right]]++;
            }
            else {
                count += 1;
            }

            while(map.size()==5 && count >= k) {
                ans += (n-right);
                if(isVowel(s[left])) {
                    map[s[left]]--;
                    if(map[s[left]] == 0) {
                        map.erase(s[left]);
                    }
                }
                else {
                    count--;
                }
                left++;
            }
        }

        return ans;
    }
    long long countOfSubstrings(string s, int k) {
        return atLeastK(s,k) - atLeastK(s,k+1);
    }
};
