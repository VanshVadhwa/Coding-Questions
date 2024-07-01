#include <iostream>
using namespace std;

class Solution {
public:
  double myPow(double x, int n) {
    double ans = 1.0;
    if (x == 1 || n == 0) {
      return 1;
    }

    long long var = n;  // To handle INT_MIN

    if (var < 0) {
      x = 1 / x;
      var = -var;
    }

    while (var > 0) {
      if (var % 2 == 1) {
        ans *= x;
      }
      x *= x;
      var /= 2;
    }

    return ans;
  }
};

int main() {
  double x;
  int n;

  cout << "Enter the base (x): ";
  cin >> x;

  cout << "Enter the power (n): ";
  cin >> n;

  Solution obj;
  double result = obj.myPow(x, n);

  cout << x << " raised to the power of " << n << " is: " << result << endl;

  return 0;
}
