#include <iostream>

class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0) {
            return false;
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Test cases
    std::cout << solution.canWinNim(4) << std::endl;  // Output: false
    std::cout << solution.canWinNim(5) << std::endl;  // Output: true
    std::cout << solution.canWinNim(6) << std::endl;  // Output: true

    return 0;
}
