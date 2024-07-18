#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
private:
    int remove(string& s, char a, char b, int gain) {
        vector<char> v;
        int count = 0;

        for (char c : s) {
            if (c == b && !v.empty() && v.back() == a) {
                v.pop_back();
                count += gain;
            } 
            else {
                v.push_back(c);
            }
        }
        s = string(v.begin(), v.end());
        return count;
    } 
public:
    int maximumGain(string s, int x, int y) {
        int ans = 0;

        if(x > y) {
            ans += remove(s,'a','b',x);
            ans += remove(s,'b','a',y);
        }
        else {
            ans += remove(s,'b','a',y);
            ans += remove(s,'a','b',x);
        }

        return ans;
    }
};

int main() {
    Solution solution;
    string s = "aabbaaxybbaabb";
    int x = 5, y = 4;

    int result = solution.maximumGain(s, x, y);
    cout << "Maximum Gain: " << result << endl;

    return 0;
}
