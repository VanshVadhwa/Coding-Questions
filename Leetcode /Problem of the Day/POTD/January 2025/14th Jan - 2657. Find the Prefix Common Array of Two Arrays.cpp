class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n,0);
        vector<bool> marked(51,false);

        int count = 0;

        for(int i=0;i<n;i++) {
            if(A[i]==B[i]) {
                count++;
            }
            else {
                if(marked[A[i]]) count++;
                if(marked[B[i]]) count++;
            }
            marked[A[i]] = true;
            marked[B[i]] = true;
            ans[i] = count;
        }

        return ans;
    }
};
