#include <iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int digit;
        while(x != 0) {
            digit = x % 10;
            x = x / 10;
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }
            ans = ans * 10 + digit;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    int num = 123; // Example input
    int reversed_num = solution.reverse(num);

    std::cout << "Original number: " << num << std::endl;
    std::cout << "Reversed number: " << reversed_num << std::endl;

    return 0;
}
