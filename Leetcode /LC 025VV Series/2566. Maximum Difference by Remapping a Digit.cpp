class Solution {
private:
    int convert(string s, char ch) {
        char map = ' ';
        for(char& c : s) {
            if(c==ch) continue;
            if(map == ' ' && c != ch) {
                map = c;
                c = ch;
            }
            else if(c==map) {
                c=ch;
            }
        }
        int ans = stoi(s);
        return ans;
    }
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int maxi = convert(s,'9');
        int mini = convert(s,'0');
        return maxi - mini;
    }
};
