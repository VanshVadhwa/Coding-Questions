class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        unordered_map<int,int> map;

        for(int i=0;i<n;i++) {
            ans += map[nums[i]-i];
            map[nums[i]-i]++;
        }

        return (long long)n*(n-1)/2 - ans;
    }
};
