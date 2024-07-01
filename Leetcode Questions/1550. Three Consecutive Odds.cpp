#include <iostream>
#include <vector>

class Solution {
public:
  bool threeConsecutiveOdds(vector<int>& arr) {
    int n = arr.size();
    if (n < 3) {
      return false;
    }

    for (int i = 0; i < n - 2; i++) {
      if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  int n;
  std::cout << "Enter the size of the array (n): ";
  std::cin >> n;

  std::vector<int> arr(n);
  std::cout << "Enter the elements of the array:\n";
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  Solution obj;
  bool result = obj.threeConsecutiveOdds(arr);

  if (result) {
    std::cout << "The array contains three consecutive odd numbers." << std::endl;
  } else {
    std::cout << "The array does not contain three consecutive odd numbers." << std::endl;
  }

  return 0;
}
