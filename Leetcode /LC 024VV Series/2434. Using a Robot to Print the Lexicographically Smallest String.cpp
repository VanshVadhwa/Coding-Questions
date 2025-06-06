class Solution {
private:
    char solve(vector<int>& freq) {
        for(int i=0;i<26;i++) {
            if(freq[i]) return 'a' + i;
        }
        return 'a';
    }
public:
    string robotWithString(string s) {
        string t = "";
        vector<int> freq(26,0);
        stack<char> st;

        for(char c : s) {
            freq[c-'a']++;
        }

        for(char c : s) {
            st.push(c);
            freq[c-'a']--;

            while(!st.empty() && st.top() <= solve(freq)) {
                t += st.top();
                st.pop();
            }
        }

        while(!st.empty()) {
            t += st.top();
            st.pop();
        }

        return t;
    }
};
