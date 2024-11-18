class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        // O(n^2) time and O(1) space
        int n = code.size();
        vector<int> ans(n,0);
        if(k==0) return ans;

        for(int i=0;i<n;i++) {
            int sum = 0;
            int len = 0;
            if(k>0) {
                for(int j=i+1;j<2*n-1;j++) {
                    sum += code[j%n];
                    len++;
                    if(len==k) break;
                }
                ans[i] = sum;
            }
            else {
                for(int j=i-1;j>-n;j--) {
                    sum += code[(n+j)%n];
                    len++;
                    if(len==abs(k)) break;
                }
                ans[i] = sum;
            }
        }

        return ans;
        
        

    }
};
