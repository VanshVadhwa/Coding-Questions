#include <iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int left = 0;

        while (numBottles >= numExchange) {
            ans += numBottles / numExchange;
            left = numBottles % numExchange;
            numBottles = numBottles / numExchange;
            numBottles += left;
            left = 0;
        }
        
        return ans;
    }
};

int main() {
    Solution solution;

    // Test case 1
    int numBottles1 = 9;
    int numExchange1 = 3;
    cout << "Test Case 1: " << solution.numWaterBottles(numBottles1, numExchange1) << endl; // Output: 13

    // Test case 2
    int numBottles2 = 15;
    int numExchange2 = 4;
    cout << "Test Case 2: " << solution.numWaterBottles(numBottles2, numExchange2) << endl; // Output: 19

    // Test case 3
    int numBottles3 = 5;
    int numExchange3 = 5;
    cout << "Test Case 3: " << solution.numWaterBottles(numBottles3, numExchange3) << endl; // Output: 6

    // Test case 4
    int numBottles4 = 2;
    int numExchange4 = 3;
    cout << "Test Case 4: " << solution.numWaterBottles(numBottles4, numExchange4) << endl; // Output: 2

    return 0;
}
