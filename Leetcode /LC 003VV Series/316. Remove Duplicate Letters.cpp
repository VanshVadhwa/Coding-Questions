class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        vector<int> freq(26,false);
        for(char c : s) {
            freq[c-'a']++;
        }

        vector<bool> marked(26,false);
        stack<char> st;

        for(char c : s) {
            freq[c-'a']--;

            if(marked[c-'a']) continue;

            while(!st.empty() && st.top() > c && freq[st.top()-'a']>0) {
                marked[st.top()-'a'] = false;
                st.pop();
            }

            st.push(c);
            marked[c-'a'] = true;
        }

        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
