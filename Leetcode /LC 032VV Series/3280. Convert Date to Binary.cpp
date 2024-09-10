class Solution {
private:
    string binary(int n) {
        string ans = "";
        while(n!=0) {
            char c = n%2+'0';
            ans = c +ans;
            n /= 2;
        }
        return ans;
    }
public:
    string convertDateToBinary(string date) {
        return binary(stoi(date.substr(0,4))) + '-' + binary(stoi(date.substr(5,2))) + '-' + binary(stoi(date.substr(8,2)));
    }
};
