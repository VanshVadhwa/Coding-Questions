#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back(i + 1);
        }

        int index = 0;

        while(arr.size() > 1) { 
            index = (index + k - 1) % arr.size();
            arr.erase(arr.begin() + index);
        }

        return arr[0];
    }
};

int main() {
    Solution sol;
    int n = 5;
    int k = 3;
    cout << "The winner is: " << sol.findTheWinner(n, k) << endl;
    return 0;
}
