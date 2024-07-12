class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int start = 0, end = n-1, position = n;

        while(start <= end) 
        {
            int mid = start + (end-start)/2;

            if(nums[mid] == target) {
                return mid;
            }

            else if(nums[mid] > target) {
                position = mid;
                end = mid - 1;
            }
            else {
                start = mid+1;
            }
        }
        return position;
    }
};
