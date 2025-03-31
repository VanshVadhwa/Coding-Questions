class Solution {
private:
    bool isEmail(string& s) {
        for(char c : s) if(c=='@') return true;
        return false;
    }

    string emailAns(string s) {
        string ans = "";
        for(int i=s.length()-1;i>0;i--) {
            ans += tolower(s[i]);
            if(s[i]=='@') {
                ans += tolower(s[i-1]);
                ans += "*****";
                ans += tolower(s[0]);
                break;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string numberAns(string s) {
        string digits = "";
        for(char c : s) if(isdigit(c)) digits += c;
        string ans = "***-***-" + digits.substr(digits.size()-4);
        if(digits.size()>10) {
            ans = "+" + string(digits.size()-10,'*') + "-" + ans;
        } 
        return ans;
    }
public:
    string maskPII(string s) {
        return isEmail(s) ? emailAns(s) : numberAns(s);
    }
};
