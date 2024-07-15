class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if(n==1) {
            return 0;
        }

        if(n>1 && nums[0]>nums[1]) {
            return 0;
        }
        if(n>1 && nums[n-1]>nums[n-2]) {
            return n-1;
        }

        int start = 0, end = n-1, ans = 0;

        while(start <= end)
        {
            int mid = start + (end-start)/2;

            if(nums[mid]<nums[mid+1]) {
                start = mid+1;
            }
            else if(nums[mid]>=nums[mid+1]) {
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
    }
};
