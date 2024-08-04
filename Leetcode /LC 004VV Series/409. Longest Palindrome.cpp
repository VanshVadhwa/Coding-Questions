class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();

        vector<int> alpha(100,0);

        for(char c : s)
        {
            if(isupper(c)) {
                alpha[c-'A']++;
            }
            else {
                alpha[c-'a']++;
            }
        }

        int count = 0, oddCount = 0;
        bool flag = false;

        for(int i=0;i<100;i++)
        {
            if(alpha[i]%2==0) {
                count+=alpha[i];
            }
            else {
                count += alpha[i]-1;
                oddCount++;
            } 
        }
        if(oddCount>0) count++;
        return count;
    }
};
