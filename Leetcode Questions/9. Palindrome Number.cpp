#include <iostream>
using namespace std;

class Solution {
    int reverse(int num) {
        if (num < 0) {
            return false;
        }
        long long rev = 0;

        while (num != 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }
        return rev;
    }
public:
    bool isPalindrome(int x) {
        int num = reverse(x);
        return num == x;
    }
};

int main() {
    Solution solution;
    int x = 121; // Example input
    if (solution.isPalindrome(x)) {
        std::cout << x << " is a palindrome." << std::endl;
    } else {
        std::cout << x << " is not a palindrome." << std::endl;
    }
    return 0;
}
