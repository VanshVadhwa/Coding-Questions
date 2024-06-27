#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    Solution solution;
    int num;
    cout << "Enter a number to check if it is a power of two: ";
    cin >> num;

    if (solution.isPowerOfTwo(num)) {
        std::cout << num << " is a power of two." << endl;
    } else {
        std::cout << num << " is not a power of two." << endl;
    }
    
    return 0;
}
