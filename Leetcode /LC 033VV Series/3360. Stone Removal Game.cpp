class Solution {
public:
    bool canAliceWin(int n) {
        bool flag = false;
        int moves = 10;
        while(n >= moves) {
            flag = !flag;
            n -= moves;
            moves -= 1;
        }

        return flag;
    }
};
