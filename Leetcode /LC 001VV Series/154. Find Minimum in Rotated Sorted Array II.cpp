class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1, ans = nums[0];
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] < nums[end]) {
                end = mid;
            }
            else if(nums[mid] > nums[end]) {
                start = mid+1;
            }
            else {
                end -= 1;
            }
        }

        return nums[start];
    }
};
