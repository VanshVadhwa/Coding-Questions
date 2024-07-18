class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();

        int count = 0;

        for(int i=0;i<n;i++) {
            if(count%2==0 && nums[i]%2==0) {
                swap(nums[count],nums[i]);
                count++;
                i=count;
            } 

            else if(count%2!=0 && nums[i]%2!=0) {
                swap(nums[count],nums[i]);
                count++;
                i=count;
            } 
        }
        return nums;
    }
};
