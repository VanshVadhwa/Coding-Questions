class Solution {
public:
    vector<int> sumZero(int n) {
        int extra = n + n/2;
        vector<int> ans(n);
        int index = 0;
        while(index < n) {
            if(n%2==0) {
                if(n==extra) {
                    extra -= 1;
                    continue;
                } 
                ans[index++] = n-extra;  
            }
            else {
                ans[index++] = n-extra;
            }
            extra -= 1;
        }
        return ans;
    }
};
