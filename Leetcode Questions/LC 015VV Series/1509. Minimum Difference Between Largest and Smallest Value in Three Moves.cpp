#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minDifference(std::vector<int>& nums) {
        int n = nums.size();
        if (n < 5) return 0;
        std::sort(nums.begin(), nums.end());
        if (nums[0] == nums.back()) return 0;
        return std::min({nums[n - 4] - nums[0], nums[n - 1] - nums[3], nums[n - 3] - nums[1], nums[n - 2] - nums[2]});
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {9, 2, 5, 4, 6, 1, 8, 3, 7};
    
    int minDiff = sol.minDifference(nums);
    
    std::cout << "The minimum difference after operation is: " << minDiff << std::endl;
    
    return 0;
}
