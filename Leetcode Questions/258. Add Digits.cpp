#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if(num < 10) {
            return num;
        }

        if(num % 9 == 0) {
            return 9;
        }

        if(num % 9 != 0) {
            return num % 9;git
            
        }

        return -1;
        
        // int rem = 0;
        // int ans = 0;
        
        // while(num != 0) {
        //     rem = num % 10;
        //     num /= 10;
        //     ans += rem;
        // }

        // if(ans < 10) {
        //     return ans;
        // }

        // int new_ans;

        // if(ans > 10) {
        //     int new_rem = 0;
        //     new_ans = 0;
            
        //     while(ans != 0) {
        //         new_rem = ans % 10;
        //         ans /= 10;
        //         new_ans += new_rem;
        //     }
            
        //     if(new_ans < 10) {
        //         return new_ans;
        //     }
        // }

        // int final_ans = 0;
        // int final_rem = 0;

        // while(new_ans != 0) {
        //     final_rem = new_ans % 10;
        //     new_ans /= 10;
        //     final_ans += final_rem;
        // }
        
        // return final_ans;
    }
};

int main() {
    Solution obj;
    int num = 12345;
    cout << "Result: " << obj.addDigits(num) << endl;
    
    return 0;
}
