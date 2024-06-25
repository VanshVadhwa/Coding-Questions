#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int n = hours.size();
        int ans = 0;

        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if((hours[i] + hours[j]) % 24 == 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> hours = {1, 23, 12, 12, 24, 0};

    int result = solution.countCompleteDayPairs(hours);

    cout << "Number of complete day pairs: " << result << endl;

    return 0;
}
