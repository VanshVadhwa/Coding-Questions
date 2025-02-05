class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length(), count = 0;
        int first = 0, second = 0;

        for(int i=0;i<n;i++) {
            if(s1[i] != s2[i]) {
                count += 1;
                if(count == 1) first = i;
                else if(count == 2) second = i;
                else return false;
            }
        }

        return s1[second]==s2[first] && s1[first] == s2[second];


        // O(n) time and O(1) but with three passes
        // vector<int> marked(26,0);
        
        // for(char c : s1) {
        //     marked[c-'a']++;
        // }
        // for(char c : s2) {
        //     if(marked[c-'a']==0) return false;
        //     marked[c-'a']--;
        // }

        // while(index < n) {
        //     if(s1[index] != s2[index]) {
        //         count += 1;
        //     } 
        //     index += 1;
        // }

        // return count <= 2;
    }
};
