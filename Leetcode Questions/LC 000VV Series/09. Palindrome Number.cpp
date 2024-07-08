#include <iostream>
using namespace std;

// class Solution {
//     int reverse(int num) {
//         if (num < 0) {
//             return false;
//         }
//         long long rev = 0;

//         while (num != 0) {
//             int digit = num % 10;
//             rev = rev * 10 + digit;
//             num = num / 10;
//         }
//         return rev;
//     }
// public:
//     bool isPalindrome(int x) {
//         int num = reverse(x);
//         return num == x;
//     }
// };
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }

        int ans = 0;
        int rem;
        int original = x;

        while(x!=0) {
            rem = x%10;
            x /= 10;
            if(ans > INT_MAX/10) {
                return 0;
            }
            ans = ans*10 + rem;
        }

        if(ans == original) {
            return true;
        }

        return false;
    }
};

int main() {
    Solution solution;
    int x = 121; 
    if (solution.isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }
    return 0;
}
