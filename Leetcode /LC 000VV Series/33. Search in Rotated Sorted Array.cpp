class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int n = nums.size();

        int start = 0, end = n-1;

        while(start <= end) 
        {
            int mid = start + (end-start)/2;

            if(nums[mid]==target) {
                return mid;
            }

            else if(nums[mid]>=nums[0]) 
            {
                if(target <= nums[mid] && target >= nums[start]) 
                {
                    end = mid-1;
                }
                else 
                {
                    start = mid+1;
                }
            }

            else 
            {
                if(target<=nums[end] && target>=nums[mid])
                {
                    start = mid+1;
                }
                else 
                {
                    end = mid-1;
                }
            }
        }

        return -1;
    }
};
