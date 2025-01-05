class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int minPro = nums[0];
        int maxPro = nums[0];
        int ans = nums[0];

        for(int i=1;i<n;i++) {
            if(nums[i] < 0) {
                int temp = minPro;
                minPro = maxPro;
                maxPro = temp;
            }
            maxPro = max(nums[i], nums[i]*maxPro);
            minPro = min(nums[i], nums[i]*minPro);

            ans = max(ans,maxPro);
        }

        return ans;
    }
};
