class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {        
        int n = operations.size(), shift = 0;
        k -= 1;

        for(int i=0;k>0 && i<n;i++) {
            if((k & 1) && operations[i]==1) {
                shift = (shift+1)%26;
            }
            k >>= 1;
        }

        return char('a' + shift);
    }
};
