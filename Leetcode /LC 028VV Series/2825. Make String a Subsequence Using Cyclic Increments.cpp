class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();

        int first = 0;
        int second = 0;

        while(first<n1 && second<n2) {
            if(str1[first]==str2[second]) {
                first++;
                second++;
            }
            else {
                if((str1[first]+1)%123 == str2[second]) {
                    first++;
                    second++;
                }
                else {
                    first++;
                }
            }
            if(second==n2) return true;
        }
        return false;   
    }
};
