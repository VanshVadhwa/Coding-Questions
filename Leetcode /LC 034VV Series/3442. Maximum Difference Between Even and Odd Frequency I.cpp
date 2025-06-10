class Solution {
public:
    int maxDifference(string s) {
        vector<int> marked(26,0);
        int oddMaxi = 0, evenMini=100;

        for(char c : s) {
            marked[c-'a']++;
        }

        for(int i : marked) {
            if(i > 0) {
                if(i%2==0) {
                    evenMini = min(evenMini,i);
                }
                else {
                    oddMaxi = max(oddMaxi,i);
                }
            }
        }

        return oddMaxi - evenMini;
    }
};
