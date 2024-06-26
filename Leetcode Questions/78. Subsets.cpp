#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void solve(vector<int>& nums, int index, int size, vector<vector<int>>& ans, vector<int>& temp) {
        if(index >= size) {
            ans.push_back(temp);
            return;
        }
        // excluding
        solve(nums, index + 1, size, ans, temp);

        // including
        temp.push_back(nums[index]);
        solve(nums, index + 1, size, ans, temp);
        temp.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int size = nums.size();
        int index = 0;
        solve(nums, index, size, ans, temp);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = solution.subsets(nums);

    cout << "Subsets:" << endl;
    for (int subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
