class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n = nums.size();
        int left = 0;
        int ans = 0;

        for(int right=0;right<n;right++) {
            map[nums[right]]++;
            while(left < n && map[nums[right]]>k) {
                map[nums[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }

        return ans;
    }
};
