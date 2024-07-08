#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  int sumOfUnique(vector<int>& nums) {
    unordered_map<int, int> map;

    for (int num : nums) {
      map[num]++;
    }

    int sum = 0;

    for (auto const& pair : map) {
      if (pair.second == 1) {
        sum += pair.first;
      }
    }

    return sum;
  }
};

int main() {
  std::vector<int> nums;
  int num;
  
  std::cout << "Enter numbers for the vector (enter -1 to stop): ";
  while (true) {
    std::cin >> num;
    if (num == -1) {
      break;
    }
    nums.push_back(num);
  }

  Solution obj;
  int uniqueSum = obj.sumOfUnique(nums);

  std::cout << "The sum of unique elements in the vector is: " << uniqueSum << std::endl;

  return 0;
}
