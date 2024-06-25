#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start = 0;
        long long end = sqrt(c);

        while(start <= end) {
            long long n = start * start;
            long long m = end * end;
            if(m + n == c) {
                return true;
            }
            if(m + n < c) {
                start++;
            }
            if(m + n > c) {
                end--;
            } 
        }
        return false;
    }
};

int main() {
    Solution solution;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    bool result = solution.judgeSquareSum(number);

    if(result) {
        cout << number << " can be expressed as the sum of two squares." << endl;
    } else {
        cout << number << " cannot be expressed as the sum of two squares." << endl;
    }

    return 0;
}
