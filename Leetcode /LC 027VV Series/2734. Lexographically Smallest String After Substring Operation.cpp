class Solution {
public:
    string smallestString(string s) {
        //O(n) time and 0(1)space
        int n = s.length();
        bool flag = false;
        int i=0;

        while(i<n && s[i]=='a') {
            if(i==n-1) {
                s[i] ='z';
                return s;
            }
            s[i] = 'a';
            i++;
        }

        for(;i<n;i++)
        {
            if(s[i]=='a' && flag == true)
            {
                break;
            }
            else
            {
                flag = true;
                s[i] = s[i]-1;
            }
        }
        return s;
    }
};
        //O(n) time and O(n)space
//         int n = s.length();
//         string ans = "";
//         bool flag = false;
//         int i=0;

//         while(i<n && s[i]=='a') {
//             if(i==n-1) {
//                 ans+='z';
//                 return ans;
//             }
//             ans += 'a';
//             i++;
//         }

//         for(;i<n;i++)
//         {
//             if(s[i]=='a' && flag == true)
//             {
//                 while(i<n) {
//                     ans+=s[i];
//                     i++;
//                 }
//             }
//             else
//             {
//                 flag = true;
//                 char temp = s[i]-1;
//                 ans += temp;
//             }
//         }
//         return ans;
//     }
// };
