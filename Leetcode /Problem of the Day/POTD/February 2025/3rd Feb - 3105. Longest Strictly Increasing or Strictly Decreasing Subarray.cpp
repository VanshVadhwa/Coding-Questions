class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        // O(n) time && O(1) space
        for(int i=1;i<n;i++) {
            int count = 1;
            if(nums[i] > nums[i-1]) {
                while(i<n && nums[i] > nums[i-1]) {
                    count++;
                    i += 1;
                }
            }
            else if(nums[i] < nums[i-1]) {
                while(i<n && nums[i] < nums[i-1]) {
                    count++;
                    i += 1;
                }
            }
            else {
                ans = max(ans,count);
                continue;
            }
            ans = max(ans,count);
            i--;
        }

        return ans;
    }
};
