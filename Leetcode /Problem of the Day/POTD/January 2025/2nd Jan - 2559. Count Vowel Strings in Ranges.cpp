class Solution {
bool isVowel(string s) {
    int n = s.length();
    if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u') && 
    (s[n-1]=='a' || s[n-1]=='e' || s[n-1]=='i' || s[n-1]=='o' || s[n-1]=='u'))
    return true;
    return false;
}
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> marked(n,0);
        if(isVowel(words[0])) marked[0] = 1;
        for(int i=1;i<n;i++) {
            if(isVowel(words[i])) marked[i] = 1 + marked[i-1];
            else marked[i] = marked[i-1];
        }

        int q = queries.size();
        vector<int> ans(q,0);
        for(int i=0;i<q;i++) {
            if(queries[i][0]>0)
            ans[i] = marked[queries[i][1]] - marked[queries[i][0]-1]; 
            else 
            ans[i] = marked[queries[i][1]];
        }

        return ans;
        
    }
};
