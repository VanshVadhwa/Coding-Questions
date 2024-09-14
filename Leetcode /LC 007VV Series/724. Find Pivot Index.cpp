class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = accumulate(nums.begin(),nums.end(),0);
        int leftSum = 0;
        int temp = totalSum;

        for(int i=0;i<n;i++)
        {
            temp -= nums[i];
            if(temp*2+nums[i]==totalSum) {
                return i;
            }
        }

        return -1;
    }
};

//one more
// for(int i=0;i<n;i++) {
//   if(leftSum==totalSum-leftSum-nums[i]) {
//     return i;
//   }
// }
// return -1;
