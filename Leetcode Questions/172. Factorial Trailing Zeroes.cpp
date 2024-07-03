#include <iostream>

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n >= 5) {
            count += n / 5;
            n = n / 5;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int number = 25; // You can change this to test with different values
    
    int result = sol.trailingZeroes(number);
    
    std::cout << "Number of trailing zeroes in " << number << "! is: " << result << std::endl;
    
    return 0;
}
