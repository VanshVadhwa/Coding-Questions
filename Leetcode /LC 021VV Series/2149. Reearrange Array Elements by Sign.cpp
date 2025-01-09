class Solution {
private:
    bool check(string s, string pre) {
        int n1 = s.length(), n2 = pre.length();
        int index1 = 0, index2 = 0;
        while(index1 < n1 && index2 < n2) {
            if(s[index1]!=pre[index2]) {
                return false;
            }
            index1++;
            index2++;
        }
        return index2==n2;
    }
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int ans = 0;

        for(int i=0;i<n;i++) {
            if(check(words[i],pref)) ans++;
        }

        return ans;
    }
};
