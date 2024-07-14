class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int start = 0, end = 0, ans = 0;

        for(int i=0;i<n;i++) {
            start = max(start, weights[i]);
            end+=weights[i];
        }

        while(start <= end)
        {
            int mid = start + (end-start)/2;
            int packages = 1, weight = 0;

            for(int i=0;i<n;i++) {
                weight+=weights[i];
                if(weight > mid) {
                    packages++;
                    weight = weights[i];
                }
            }
            if(packages <= days) {
                ans = mid;
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return ans;
    }
};
