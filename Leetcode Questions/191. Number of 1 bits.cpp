#include <iostream>

class Solution {
public:
  int hammingWeight(int n) {
    int count = 0;

    while (n) {
      if (n % 2 != 0) {
        count++;
      }
      n /= 2;
    }

    return count;
  }
};

int main() {
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  Solution obj;
  int weight = obj.hammingWeight(num);

  std::cout << "The number of bits set to 1 (Hamming weight) for " << num << " is: " << weight << std::endl;

  return 0;
}
