#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count = 0;
        int n = colors.size();

        for (int i = 0; i < n - 2; i++) {
            if (colors[i + 1] > colors[i] && colors[i + 1] > colors[i + 2]) {
                count++;
            }
            if (colors[i + 1] < colors[i] && colors[i + 1] < colors[i + 2]) {
                count++;
            }
        }
        if ((colors[n - 1] < colors[n - 2] && colors[n - 1] < colors[0]) || 
            (colors[n - 1] > colors[n - 2] && colors[n - 1] > colors[0])) {
            count++;
        }
        if ((colors[0] < colors[n - 1] && colors[0] < colors[1]) || 
            (colors[0] > colors[n - 1] && colors[0] > colors[1])) {
            count++;
        }
        return count;
    }
};

int main() {
    Solution solution;

    vector<int> colors1 = {1, 3, 2, 4, 3};
    cout << "Number of alternating groups in colors1: " << solution.numberOfAlternatingGroups(colors1) << endl;

    vector<int> colors2 = {4, 1, 2, 3};
    cout << "Number of alternating groups in colors2: " << solution.numberOfAlternatingGroups(colors2) << endl;

    vector<int> colors3 = {5, 1, 5, 1, 5};
    cout << "Number of alternating groups in colors3: " << solution.numberOfAlternatingGroups(colors3) << endl;

    vector<int> colors4 = {1, 2, 3};
    cout << "Number of alternating groups in colors4: " << solution.numberOfAlternatingGroups(colors4) << endl;

    return 0;
}
