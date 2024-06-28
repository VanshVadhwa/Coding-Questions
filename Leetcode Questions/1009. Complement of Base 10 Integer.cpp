#include <iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0, rem, mul = 1;

        if (n == 0) {
            return 1;
        }

        while (n) {
            rem = n % 2;
            rem = rem ^ 1;
            ans = ans + rem * mul;
            n /= 2;
            mul *= 2;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int num = 5; 
    int complement = obj.bitwiseComplement(num);
    
    cout << "Bitwise complement of " << num << " is: " << complement << endl;

    return 0;
}
