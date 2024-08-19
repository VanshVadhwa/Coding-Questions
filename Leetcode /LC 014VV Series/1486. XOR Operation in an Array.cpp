class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start; 
        int count = 2;
        for(int i=start+2;count<=n;i+=2) {
            ans ^= i; 
            count++;
        }
        return ans;
    }
};
