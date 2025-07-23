class Solution {
private:
    int solve(stack<char>& st, string& s, int maxi, string target) {
        int ans = 0;
        for(char c : s) {
            if(!st.empty() && st.top() == target[0] && c==target[1]) {
                ans += maxi;
                st.pop();
            }
            else st.push(c);
        }
        return ans;
    }
public:
    int maximumGain(string s, int x, int y) {
        int maxi = max(x,y);
        stack<char> st;
        int ans = (maxi==x) ? solve(st,s,maxi,"ab") : solve(st,s,maxi,"ba");

        string str = "";
        while(!st.empty()) {
            str += st.top();
            st.pop();
        }

        reverse(str.begin(),str.end());

        for(char c : str) {
            if(!st.empty() && st.top() != c && (st.top()=='a' || st.top()=='b') && (c=='a' || c=='b')) {
                if(st.top()=='b' && c=='a') ans += y;
                else ans += x;
                st.pop();
            }
            else st.push(c);
        }

        return ans;
    }
};
