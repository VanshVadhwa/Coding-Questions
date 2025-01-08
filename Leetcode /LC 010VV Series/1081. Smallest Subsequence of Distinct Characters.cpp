class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.length();

        vector<int> count(26,0);
        for(char c : s) {
            count[c-'a']++;
        }

        vector<bool> marked(26,false);
        stack<char> st;

        for(char c : s) {
            count[c-'a']--;
            if(marked[c-'a']) continue;

            while(!st.empty() && c < st.top() && count[st.top()-'a']>0) {
                marked[st.top()-'a'] = false;
                st.pop();
            }

            marked[c-'a'] = true;
            st.push(c);
        }

        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
