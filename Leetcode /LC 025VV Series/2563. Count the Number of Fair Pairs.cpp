class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long ans = 0;

        for(int i=0;i<n;i++) {
            //binary search
            int start = i+1;
            int end = n-1;

            // lower bound
            while(start <= end) {
                int mid = start + (end-start)/2;
                if(nums[i]+nums[mid]>=lower) {
                    end = mid-1;
                }
                else {
                    start = mid+1;
                }
            }
            int lowerBound = end;

            // rearranging start and end
            start = i+1;
            end = n-1;

            //upper bound
            while(start <= end) {
                int mid = start + (end-start)/2;
                if(nums[i]+nums[mid]<=upper) {
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
            }
            int upperBound = start;

            if(lowerBound < upperBound) {
                ans += upperBound-lowerBound-1;
            }
        }

        return ans;
    }
};
