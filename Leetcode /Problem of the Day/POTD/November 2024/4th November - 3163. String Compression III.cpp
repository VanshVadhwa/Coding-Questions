class Solution {
public:
    string compressedString(string word) {
        int n = word.length();
        string ans = "";
        bool flag = false;

        for(int i=1;i<n;i++) {
            char c = word[i-1];
            int count = 1;
            while(i<n && word[i]==c && count<9) {
                if(i==n-1) flag = true;
                count++;
                i++;
            }
            ans += (count+'0');
            ans += c;
        }

        if(!flag) {
            ans += '1';
            ans += word[n-1];
        }

        return ans;
    }
};
