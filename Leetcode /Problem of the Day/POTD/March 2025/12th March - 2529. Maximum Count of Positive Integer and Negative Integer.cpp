class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pos = n, neg = -1, start = 0, end = n-1;

        // finding the first positive element
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] > 0) {
                pos = mid;
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }

        // finding the last negative element
        start = 0, end = n-1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] < 0) {
                neg = mid;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        
        return max(n-pos,neg+1);
    }
};
