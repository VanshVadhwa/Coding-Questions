#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
  std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_map<int, int> map;
    std::vector<int> ans;

    for (int i : nums1) {
      map[i]++;
    }

    for (int i = 0; i < nums2.size(); i++) {
      if (map[nums2[i]] > 0) {
        ans.push_back(nums2[i]);
        map[nums2[i]]--;
      }
    }

    return ans;
  }
};

int main() {
  int n1, n2;
  std::cout << "Enter the size of the first array (nums1): ";
  std::cin >> n1;

  std::vector<int> nums1(n1);
  std::cout << "Enter the elements of the first array:\n";
  for (int i = 0; i < n1; i++) {
    std::cin >> nums1[i];
  }

  std::cout << "Enter the size of the second array (nums2): ";
  std::cin >> n2;

  std::vector<int> nums2(n2);
  std::cout << "Enter the elements of the second array:\n";
  for (int i = 0; i < n2; i++) {
    std::cin >> nums2[i];
  }

  Solution obj;
  std::vector<int> intersection_result = obj.intersect(nums1, nums2);

  std::cout << "Intersection of the arrays: ";
  for (int num : intersection_result) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
