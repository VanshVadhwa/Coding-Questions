class Solution {
public:
    int pivotInteger(int n) {
        vector<int> prefix(n+1,0);
        
        for(int i=1;i<=n;i++) {
            prefix[i] = prefix[i-1]+i;
        }

        int totalSum = prefix[n];

        for(int i=1;i<=n;i++) {
            int leftSum = prefix[i-1];
            int rightSum = totalSum - prefix[i];
            if(leftSum==rightSum) {
                return i;
            }
        }

        return -1;
    }
};
