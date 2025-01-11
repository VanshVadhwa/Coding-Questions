class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
        if(k>n) return false;
        vector<int> marked(26,0);
        int count = 0;

        for(char c : s) {
            marked[c-'a']++;
            if(marked[c-'a']%2==0) {
                count--;
            }
            else {
                count++;
            }
        }

        return count <= k;
    }
};
