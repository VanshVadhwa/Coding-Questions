class Solution {
public:
    int minLength(string s) {
        int index = 0; 

        for (int i = 0; i < s.length(); i++) {
            if (index > 0 && ((s[index - 1] == 'A' && s[i] == 'B') || (s[index - 1] == 'C' && s[i] == 'D'))) 
            {
                index--; 
            } 

            else {
                s[index] = s[i]; 
                index++;
            }
        }

        return index; 
    }
};
