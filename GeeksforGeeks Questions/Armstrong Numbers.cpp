#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while(num) {
        num /= 10;
        count++;
    }
    return count;
}

bool Armstrong(int num, int digits) {
    int n = num;
    int ans = 0, rem;
    while(n) {
        rem = n%10;
        n /= 10;
        ans = ans + pow(rem, digits);
    }
    if(ans == num) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int digits = countDigits(n);
    bool ans = Armstrong(n, digits);
    cout << ans << endl;
    return 0;
}
