#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                ans.push_back(i);
            } 
            else if (s[i] == ')') {
                reverse(s.begin() + ans.back(), s.begin() + i);
                ans.pop_back();
            }
        }

        string answer;

        for (int i = 0; i < n; i++) {
            if (s[i] != '(' && s[i] != ')') {
                answer.push_back(s[i]);
            }
        }

        return answer;
    }
};

int main() {
    Solution sol;

    string s1 = "(ed(et(oc))el)";
    string result1 = sol.reverseParentheses(s1);
    cout << "Input: " << s1 << "\nOutput: " << result1 << endl; // Expected: "leetcode"

    string s2 = "(u(love)i)";
    string result2 = sol.reverseParentheses(s2);
    cout << "Input: " << s2 << "\nOutput: " << result2 << endl; // Expected: "iloveu"

    string s3 = "(ab(cd(ef)gh)ij)";
    string result3 = sol.reverseParentheses(s3);
    cout << "Input: " << s3 << "\nOutput: " << result3 << endl; // Expected: "jihgfeabc"

    return 0;
}
