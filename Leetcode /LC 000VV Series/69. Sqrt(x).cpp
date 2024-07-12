#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int n) {
        if (n < 2) {
            return n;
        }
        int start = 0;
        int end = n;
        int ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (mid == n / mid) {
                return mid;
            } else if (mid < n / mid) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = solution.mySqrt(number);
    cout << "The square root of " << number << " is approximately " << result << endl;

    return 0;
}
