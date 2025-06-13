class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int start = 0, end = nums[n-1]-nums[0], ans = 0;

        while(start <= end) {
            int mid = start + (end-start)/2;

            int pairs = 0;
            for(int i=1;i<n;) {
                if(nums[i]-nums[i-1] <= mid) {
                    pairs++;
                    i+=2;
                }
                else {
                    i++;
                }
            }

            if(pairs >= p) {
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
