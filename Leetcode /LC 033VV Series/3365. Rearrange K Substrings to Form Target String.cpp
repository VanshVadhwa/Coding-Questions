class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        unordered_map<string,int> map;
        int n = s.length();
        int jump = n/k;
        int len = 0;
        string temp="";

        // storing the frequency, balle balle
        for(int i=0;i<n;i++) {
            temp += s[i];
            len += 1;
            if(len == jump) {
                map[temp]++;
                temp.clear();
                len = 0;
            }
        }

        // checking each in map
        temp.clear();
        len = 0;
        for(int i=0;i<n;i++) {
            temp += t[i];
            len += 1;
            if(len == jump) {
                if(map[temp]>0) {
                    map[temp]--;
                }
                else {
                    return false;
                }
                temp.clear();
                len = 0;
            }
        }
        

        return true;
    }
};
