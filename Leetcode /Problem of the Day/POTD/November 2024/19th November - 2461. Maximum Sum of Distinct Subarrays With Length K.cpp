class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        long long sum = 0;
        long long ans = 0;
        int left = 0;

        for(int right=0;right<n;right++) {
            sum += nums[right];
            map[nums[right]]++;

            if(right >= k-1) {
                if(map.size()==k) {
                    ans = max(sum,ans);
                    map.erase(nums[left]);
                }
                else {
                    map[nums[left]]--;
                    if(map[nums[left]]==0) map.erase(nums[left]);
                }
                sum -= nums[left];
                left++;
            }
        }

        return ans;
    }
};
