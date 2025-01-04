class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int n = nums.size();

        // selection sort
        // for(int i=0;i<n-1;i++) {
        //     int index = i;
        //     for(int j=i+1;j<n;j++) {
        //         if(nums[j]<nums[index]) {
        //             index = j;
        //         }
        //     }
        //     swap(nums[i],nums[index]);
        // }

        // bubble sort
        // bool flag = true;
        // for(int i=0;i<n;i++) {
        //     for(int j=0;j<n-i-1;j++) {
        //         if(nums[j]>nums[j+1]) {
        //             flag = false;
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        //     if(flag) break;
        // }

        // insertion sort
        // for(int i=1;i<n;i++) {
        //     for(int j=i;j>0;j--) {
        //         if(nums[j]<nums[j-1]) {
        //             swap(nums[j],nums[j-1]);
        //         }
        //         else {
        //             break;
        //         }
        //     }
        // }
    }
};
