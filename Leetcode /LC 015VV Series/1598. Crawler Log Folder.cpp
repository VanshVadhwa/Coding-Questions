#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  int minOperations(vector<string>& logs) {
    int count = 0;
    int n = logs.size();

    for (int i = 0; i < n; i++) {
      if (logs[i] == "../" && count) {
        count--;
      } else if (logs[i] != "./" && logs[i] != "../") {
        count++;
      }
    }

    return count;
  }
};

int main() {
  vector<string> logs = {"d1/../", "d1/../", "../"}; 

  Solution sol;
  int minOps = sol.minOperations(logs);

  cout << "Minimum Operations Needed: " << minOps << endl;

  return 0;
}
