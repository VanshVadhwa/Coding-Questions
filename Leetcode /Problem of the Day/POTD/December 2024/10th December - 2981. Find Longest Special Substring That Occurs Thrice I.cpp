class Solution {
public:
    int maximumLength(string s) {
        int n = s.length();
        unordered_map<string,int> map;
        int ans = 0;

        // counting the frquencies of all the substrings in the map
        for(int i=0;i<n;i++) {
            string temp = "";
            for(int j=i;j<n;j++) {
                temp += s[j];
                map[temp]++;
                if(map[temp]>=3) {
                    // checking all the characters same or not
                    char ch = temp[0];
                    bool flag = true;
                    for(char c : temp) {
                        if(c != ch) {
                            flag = false;
                            break;
                        }
                    }
                    if(flag && temp.length() > ans) {
                        ans = temp.length();
                    }
                }
            }
        }

        return ans==0 ? -1 : ans;

    }
};
