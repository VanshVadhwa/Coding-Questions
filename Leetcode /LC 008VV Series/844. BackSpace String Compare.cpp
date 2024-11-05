class Solution {
private:
    void convert(stack<char>& st, string s) {
        for(char c : s) {
            if(st.empty()) {
                if(c=='#') continue;
                else {
                    st.push(c);
                }
            }
            else if(c=='#') {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
    }
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        convert(st1,s);
        convert(st2,t);
        return st1==st2;
    }
};
