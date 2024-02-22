#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        vector<string> below_20 = {"", "One", "Two", "Three", "Four", "Five", 
                                   "Six", "Seven", "Eight", "Nine", "Ten",
                                   "Eleven", "Twelve", "Thirteen", "Fourteen", 
                                   "Fifteen", "Sixteen", "Seventeen", "Eighteen", 
                                   "Nineteen"};
        vector<string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", 
                               "Sixty", "Seventy", "Eighty", "Ninety"};
        vector<string> thousands = {"", "Thousand", "Million", "Billion"};
        
        string words;
        int i = 0;
        
        while (num > 0) {
            if (num % 1000 != 0) {
                words = helper(num % 1000, below_20, tens) + thousands[i] + 
                " " + words;
            }
            num /= 1000;
            i++;
        }
        
        while (words.back() == ' ')
            words.pop_back();
        
        return words;
    }
    
    string helper(int num, vector<string>& below20, vector<string>& tens) {
        if (num == 0) {
            return "";
        } 
        else if (num < 20) {
            return below20[num] + " ";
        } 
        else if (num < 100) {
            return tens[num / 10] + " " + helper(num % 10, below20, tens);
        } 
        else {
            return below20[num / 100] + " Hundred " + helper(num % 100, below20, tens);
        }
    }
};