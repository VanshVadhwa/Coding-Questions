#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string roman = "";
        int i = 0;
        
        while (num > 0) {
            // Subtract the largest possible Roman numeral value from the number
            while (num >= values[i]) {
                num -= values[i];
                roman += symbols[i];
            }
            // Move to the next Roman numeral value
            i++;
        }
        
        return roman;
    }
};
