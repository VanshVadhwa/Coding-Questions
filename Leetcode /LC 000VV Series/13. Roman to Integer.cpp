class Solution {
private:
    int num(char c)
    {
        if(c=='I') return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else return 1000;
    }

public:
    int romanToInt(string s) {
        int n = s.length();
        int index = 0, ans = 0;

        while(index < s.size()-1)
        {
            if(num(s[index]) < num(s[index+1])) {
                ans -= num(s[index]);
            }
            else {
                ans += num(s[index]);
            }
            index++;
        }  

        ans += num(s[s.size()-1]);
        return ans;
    }
};
