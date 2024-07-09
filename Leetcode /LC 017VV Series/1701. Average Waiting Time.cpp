#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  double averageWaitingTime(vector<vector<int>>& customer) {
    double ans = 0;
    double wait = 0;
    double extrawait = 0;

    int n = customer.size();

    wait = customer[0][1];
  
    for(int i=1;i<n;i++) {
      wait += customer[i][1];
      extrawait = customer[i-1][1] - (customer[i][0] - customer[i-1][0]);
      if(extrawait > 0) {
        ans += extrawait;
        customer[i][0] += extrawait;
      }
      extrawait = 0;
    }

    ans += wait;

    return ans/n;
  }
};

int main() {
  vector<vector<int>> customer = {{5, 2}, {10, 5}, {15, 1}}; 

  Solution sol;
  double averageWait = sol.averageWaitingTime(customer);

  cout << "Average Waiting Time: " << averageWait << endl;

  return 0;
}
