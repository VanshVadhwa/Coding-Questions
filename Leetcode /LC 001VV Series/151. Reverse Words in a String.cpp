class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        
        // reversing the words firstly
        int start = 0;
        bool flag = false;
        for(int i=0;i<=n;i++) {
            if(s[i] != ' ') flag = true;
            if((s[i]==' ' && flag) || i==n) {
                reverse(s.begin()+start,s.begin()+i);
                start = i+1;
            }
        }

        reverse(s.begin(),s.end());

        // trim all the spaces now from front and mid
        int i = 0;
        flag = false;
        for(char c : s) {
            if(c != ' ') flag = true;
            if(flag && c != ' ') {
                s[i++] = c;
            }
            if(c==' ') {
                if(i>0 && s[i-1] != ' ')s[i++] = ' ';
                flag = false;
            } 
        }

        s.resize(i);
        return s;
    }
};
