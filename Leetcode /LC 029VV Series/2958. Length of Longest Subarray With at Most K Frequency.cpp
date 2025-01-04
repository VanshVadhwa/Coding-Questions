class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        int left = 0;
        int ans = 0;

        for(int right=0;right<n;right++) {
            map[nums[right]]++;
            while(map[nums[right]]>k) {
                map[nums[left++]]--;
            }
            ans = max(ans,right-left+1);
        }

        return ans;
    }
};
