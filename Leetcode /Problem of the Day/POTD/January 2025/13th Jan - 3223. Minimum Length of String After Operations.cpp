class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();

        vector<int> indexMarked(26,0);
        for(int i=0;i<n;i++) {
            indexMarked[s[i]-'a']++;
        }

        vector<int> marked(26,0);
        int decrease = 0;
        for(int i=0;i<n;i++) {
            indexMarked[s[i]-'a']--;

            if(marked[s[i]-'a']>0 && indexMarked[s[i]-'a']>0) {
                indexMarked[s[i]-'a']--;
                decrease += 2;
            }

            marked[s[i]-'a']++;
        }

        return n-decrease;
    }
};
