class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();

        if(sentence[0] != sentence[n-1]) {
            return false;
        }

        for(int i=0;i<n;i++) {
            if(sentence[i]==' ' && i < n-1) {
                if(sentence[i-1]!=sentence[i+1]) {
                    return false;
                }
            }
        }

        return true;
    }
};
