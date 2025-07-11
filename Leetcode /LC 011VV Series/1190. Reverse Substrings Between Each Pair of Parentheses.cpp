class Solution {
private:
    void reverse(string& s, int start, int end) {
        while(start < end) {
            swap(s[start++],s[end--]);
        }
    }
public:
    string reverseParentheses(string s) {
        int n = s.length();

        stack<int> st;

        for(int i=0;i<n;i++) {
            if(s[i]=='(') {
                st.push(i);
            }
            else if(s[i]==')') {
                reverse(s,st.top()+1,i-1);
                st.pop();
            }
        }

        
        string ans = "";
        for(char c : s) if(c!='(' && c!=')') ans += c;
        
        return ans;
    }
};
