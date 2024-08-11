// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.length();
//         if(n==0) return 0;
//         vector<int> alpha(256,-1);
//         int ans = 1;

//         for(int i=1;i<n;i++)
//         {
//             int count = 1; 
//             alpha[s[i-1]]++;
//             for(int j=i;j<n;j++)
//             {
//                 alpha[s[j]]++;
//                 if(s[j]!=s[j-1] && alpha[s[j]]==0) 
//                 {
//                     count++;
//                 }
//                 else {
//                     break;
//                 }
//             }
//             ans = max(ans,count);
//             for(int i=0;i<n;i++)
//             {
//                 alpha[s[i]] = -1;
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<bool> alpha(256, 0);
        int first = 0, second = 0, len = 0;

        while(second < n)
        {
            while(alpha[s[second]])
            {
                alpha[s[first]] = 0;
                first++;
            }
            alpha[s[second]]=1;
            len = max(len, second-first+1);
            second++;
        }

        return len;
    }
};
