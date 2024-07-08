#include <iostream>

class Solution {
public:
  int passThePillow(int n, int time) {
    if (time < n) {
      return 1 + time;
    } 
    else if (time == n) {
      return n - 1;
    }

    int moves = n - 1;
    int rem = time % moves;
    int side = time / moves;

    if (side % 2 != 0) {
      return n - rem;
    }
    return 1 + rem;
  }
};

int main() {
  int num_people, pass_time;
  std::cout << "Enter the number of people (n): ";
  std::cin >> num_people;
  std::cout << "Enter the time the pillow is passed (time): ";
  std::cin >> pass_time;

  Solution obj;
  int person = obj.passThePillow(num_people, pass_time);

  std::cout << "The person holding the pillow at time " << pass_time << " is: " << person << std::endl;

  return 0;
}
