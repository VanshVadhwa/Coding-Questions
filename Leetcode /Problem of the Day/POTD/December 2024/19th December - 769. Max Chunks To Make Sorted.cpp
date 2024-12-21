class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int maxi = 0;

        for(int i=0;i<n;i++) {
            maxi = max(maxi, arr[i]);
            if(maxi==i) {
                ans++;
            }
        }

        return ans;
    }
};
