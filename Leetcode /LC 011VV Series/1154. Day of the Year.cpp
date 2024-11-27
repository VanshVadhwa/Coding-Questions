class Solution {
private:
    bool isLeapYear(int num) {
        if(num%100==0) {
            if(num%400==0) return true;
            return false;
        }
        if(num%4==0) {
            return true;
        }
        return false;
    }
    int monthDays(int num) {
        vector<int> month(13);
        month = {0,0,31,59,90,120,151,181,212,243,273,304,334};
        return month[num];
    }
public:
    int dayOfYear(string date) {
        int ans = 0;
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,7));
        int days = stoi(date.substr(8,10));
        int monDays = monthDays(month);
        if(isLeapYear(year) && monDays>=59) ans += 1;
        return ans + monDays + days;
    }
};
