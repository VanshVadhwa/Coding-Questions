class Solution {
public:
    string getHint(string secret, string guess) {
        int map[10] = {0};
        int cows = 0;
        int bulls = 0;

        for(int i=0;i<guess.length();i++) {
            if(secret[i]==guess[i]) {
                bulls++;
            }
            else {
                map[secret[i]-'0']++;
            }
        }
        
        for(int i=0;i<guess.length();i++) {
            if(guess[i]!=secret[i] && map[guess[i]-'0']>0) {
                cows++;
                map[guess[i]-'0']--;
            }
        }
        
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
