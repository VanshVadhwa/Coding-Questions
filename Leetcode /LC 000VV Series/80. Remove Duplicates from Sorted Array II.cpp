class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int index = 1, end = 1;
        int number = nums[0];

        while(end<n)
        {
            if(nums[end]==number) {
                nums[index] = number;
                index += 1;
                end++;
            }
            while(end<n && nums[end]==number) {
                end++;
            }
            if(end<n) {
                nums[index] = nums[end];
                number = nums[end];
                index++;
                end++;
            }
        }
        return index;
    }
};
