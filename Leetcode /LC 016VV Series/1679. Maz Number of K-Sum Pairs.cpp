class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int start = 0, end = n-1, ans = 0;
        
        while(start < end) {
            int mid = nums[start] + nums[end];
            if(mid==k) {
                ans += 1;
                start++,end--;
                continue;
            }
            if(mid < k) start++;
            else end--;
        }

        return ans;
    }
};
