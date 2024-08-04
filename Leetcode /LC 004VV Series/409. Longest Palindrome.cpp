// class Solution {
// public:
//     int longestPalindrome(string s) {
//         int n = s.length();

//         vector<int> alpha(128,0);

//         for(char c : s)
//         {
//             alpha[c]++;
//         }

//         int count = 0, oddCount = 0;

//         for(int i=0;i<128;i++)
//         {
//             if(alpha[i]%2==0) {
//                 count+=alpha[i];
//             }
//             else {
//                 count += alpha[i]-1;
//                 oddCount++;
//             } 
//         }
//         if(oddCount>0) count++;
//         return count;
//     }
// };


class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26,0), upper(26,0);

        int n = s.length();

        for(int i=0;i<n;i++)
        {
            if(s[i]>='a') lower[s[i]-'a']++;
            else upper[s[i]-'A']++;
        }

        int count = 0;
        bool oddCount = false;

        for(int i=0;i<26;i++)
        {
            if(lower[i]%2==0) {
                count+=lower[i];
            }
            else {
                count+=lower[i]-1;
                oddCount = true;
            }
            if(upper[i]%2==0) {
                count+=upper[i];
            }
            else {
                count+=upper[i]-1;
                oddCount=true;
            }
        }
        if(oddCount==true) count++;
        return count;
    }
};
