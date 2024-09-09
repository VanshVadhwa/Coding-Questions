class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length(), n2= word2.length();
        int start1 = 0, start2 = 0;
        string ans = "";

        while(start1 < min(n1,n2)) 
        {
            ans += word1[start1];
            ans += word2[start2];
            start1++;
            start2++;
        }

        if(n1>n2) {
            ans += word1.substr(start1);
        }
        if(n1<n2) {
            ans += word2.substr(start2);
        }

        return ans;
    }
};
