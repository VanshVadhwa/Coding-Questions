class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int left = 0;
        int ans = 0;

        for(int right=0;right<n;right++) {
            while(nums[left] + 2*k < nums[right]) {
                left++;
            }
            ans = max(ans, right-left+1);
        }

        return ans;
    }
};
