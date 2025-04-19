class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long ans = 0;

        for(int i=0;i<n;i++) {

            // upper bound
            int start = i+1, end = n-1;
            int upperIndex = i;
            while(start <= end) {
                int mid = start + (end-start)/2;
                if(nums[i]+nums[mid]<=upper) {
                    upperIndex = mid;
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
            }

            // lower bound 
            int lowerIndex = n;
            start = i+1, end = n-1;
            while(start <= end) {
                int mid = start + (end-start)/2;
                if(nums[i]+nums[mid] >= lower) {
                    lowerIndex = mid;
                    end = mid-1;
                }
                else {
                    start = mid+1;
                }
            }

            if(upperIndex >= lowerIndex)
            ans += (upperIndex-lowerIndex+1);
        }

        return ans;
    }
};
