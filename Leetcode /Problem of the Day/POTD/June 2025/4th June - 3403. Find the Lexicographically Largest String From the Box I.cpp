class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends == 1) return word;

        int n = word.size();
        int length = n - numFriends + 1; 
        char maxChar = *max_element(word.begin(), word.end());
        string ans = "";

        for (int i=0;i<n;i++) {
            if (word[i] == maxChar) {
                string temp = (length <= n-i) ? word.substr(i,length) : word.substr(i);
                ans = max(ans, temp);
            }
        }

        return ans;
    }
};
