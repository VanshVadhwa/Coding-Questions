class Solution {
public:
    string minWindow(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if(n1 < n2) return "";

        vector<int> unique(128,0);
        int distinct = 0;
        for(char c : t) {
            unique[c]++;
            if(unique[c]==1) {
                distinct++;
            }
        }

        int left = 0;
        int right = 0;
        string ans = "";
        int len = INT_MAX;
        int minLeft = 0;
        int count = 0;
        vector<int> marked(128,0);

        while(right < n1)
        {
            char c = s[right];
            marked[c]++;
            if(unique[c] && marked[c]==unique[c]) {
                count++;
            }
            while(count==distinct) {
                if(right-left+1 < len) {
                    len = right-left+1;
                    minLeft = left;
                }
                char lc = s[left];
                marked[lc]--;
                if(unique[lc] && marked[lc]<unique[lc]) {
                    count--;
                }
                left++;
            }
            right++;
        }
        return len == INT_MAX ? "" : s.substr(minLeft, len);
    }
};
