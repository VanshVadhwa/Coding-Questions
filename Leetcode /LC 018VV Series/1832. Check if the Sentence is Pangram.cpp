// class Solution {
// public:
//     bool checkIfPangram(string sentence) {
//         unordered_map<char, int> map;

//         for(char c : sentence) map[c]++;

//         return map.size()==26;
//     }
// };

// class Solution {
// public:
//     bool checkIfPangram(string sentence) {
//         vector<bool> alpha(26,0);

//         int n = sentence.size();

//         for(int i=0;i<n;i++)
//         {
//             alpha[sentence[i]-'a'] = 1;
//         }
//         for(int i=0;i<26;i++)
//         {
//             if(alpha[i]==0) return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        if(n<26) return false;

        vector<bool> alpha(26,false);
        int count = 0;

        for(char c : sentence) {
            if(!alpha[c-'a']) {
                count++;
                alpha[c-'a'] = true;
            }
            if(count==26) return true;
        }

        return false;
    }
};
