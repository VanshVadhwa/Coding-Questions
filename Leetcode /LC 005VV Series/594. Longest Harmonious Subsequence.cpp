class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int left = 0, ans = 0;
        for(int right=1;right<n;right++) {
            while(left <=right && nums[right]-nums[left] > 1) {
                left++;
            }
            if(nums[right]-nums[left]==1)
            ans = max(ans,right-left+1);
        }

        return ans;
    }
};
