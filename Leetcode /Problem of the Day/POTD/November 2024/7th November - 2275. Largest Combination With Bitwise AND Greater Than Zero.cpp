class Solution {
public:
    int largestCombination(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(32,0);
        for(int i=0;i<n;i++) {
            int count = 0;
            while(arr[i]>0) {
                if(arr[i]&1) ans[count]++;
                count++;
                arr[i]/=2;
            }
        }
        return *max_element(ans.begin(),ans.end());
    }
};
