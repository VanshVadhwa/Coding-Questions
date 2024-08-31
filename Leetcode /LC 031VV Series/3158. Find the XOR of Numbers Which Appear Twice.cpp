class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = 0;

        for(int i=1;i<n;i++) {
            int sum = nums[i]+nums[i-1]; 
            if(sum/2==nums[i]) {
                ans ^= nums[i];
            }
        }

        return ans;
    }
};
