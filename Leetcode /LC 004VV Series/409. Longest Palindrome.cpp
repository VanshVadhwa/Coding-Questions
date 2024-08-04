class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();

        vector<int> alpha(128,0);

        for(char c : s)
        {
            alpha[c]++;
        }

        int count = 0, oddCount = 0;

        for(int i=0;i<128;i++)
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
