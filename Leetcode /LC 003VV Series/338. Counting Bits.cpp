#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> countBits(int n) {
    vector<int> ans(n + 1);
    ans[0] = 0;

    for (int i = 1; i <= n; i++) {
      ans[i] = ans[i / 2] + i % 2;
    }

    return ans;
  }
};

int main() {
  int n;

  cout << "Enter the upper limit (n): ";
  cin >> n;

  Solution sol;
  vector<int> counts = sol.countBits(n);

  cout << "Number of set bits for each integer from 0 to " << n << ":" << endl;
  for (int i = 0; i <= n; i++) {
    cout << i << ": " << counts[i] << endl;
  }

  return 0;
}
