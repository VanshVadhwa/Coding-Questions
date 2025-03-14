class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size(), ans = 0;
        int start = 1, end = *max_element(candies.begin(), candies.end());

        while(start <= end) {
            long long mid = start + (end-start)/2;
            long long child = 0;
            for(int i=0;i<n;i++) {
                child += candies[i]/mid;
            }
            
            if(child >= k) {
                ans = mid;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }

        return ans;
    }
};
