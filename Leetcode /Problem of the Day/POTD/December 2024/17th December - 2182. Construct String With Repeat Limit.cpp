class Solution {
private:
    char isPresent(vector<int>& marked, int index) {
        for(;index>=0;index--) {
            if(marked[index]) {
                return index+'a';
            }
        }
        return ' ';
    }
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int n = s.length();
        vector<int> marked(26,0);

        for(char c : s) {
            marked[c-'a']++;
        }

        string ans = "";
        for(int i=25;i>=0;i--) {
            int count = 0;
            while(marked[i]) {
                if(count >= repeatLimit) {
                    char c = isPresent(marked,i-1);
                    if(c==' ') return ans;
                    ans += c;
                    marked[c-'a']--;
                    count=0;
                }
                else {
                    ans += (i+'a');
                    count++;
                    marked[i]--;
                }
            }
        }

        return ans;
    }
};
