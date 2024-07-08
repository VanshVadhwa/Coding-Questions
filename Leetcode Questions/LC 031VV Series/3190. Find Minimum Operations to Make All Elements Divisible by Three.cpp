#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]%3 == 0){
                continue;
            }
            else if(nums[i]%3 != 0){
                if((nums[i]-1)%3 == 0){
                    count++;
                }
                else if((nums[i]+1)%3 == 0){
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int result = solution.minimumOperations(nums);
    cout << "Minimum operations: " << result << endl;
    return 0;
}
