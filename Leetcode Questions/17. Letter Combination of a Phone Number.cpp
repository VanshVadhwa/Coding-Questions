#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
  void solve(string digits, string output, int index, vector<string>& ans, string mapping[]) {
    // base case
    if (index >= digits.length()) {
      ans.push_back(output);
      return;
    }

    int number = digits[index] - '0'; // We got exact number
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++) {
      output.push_back(value[i]);
      solve(digits, output, index + 1, ans, mapping);
      output.pop_back();
    }
  }

public:
  vector<string> letterCombinations(string digits) {
    if (digits.empty()) {
      return {};
    }
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
  }
};

int main() {
  Solution obj;
  string digits = "23";
  vector<string> result = obj.letterCombinations(digits);
  cout << "The letter combinations are: ";
  for (int i = 0; i < result.size(); i++)
    cout << result[i] << " ";
  cout << endl;
  return 0;
}
