class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9) {
                digits[i]=0;
            }
            else {
                digits[i]+=1;
                return digits;
            }
        }

        digits.insert(digits.begin()+0,1);
        return digits;
    }
};
