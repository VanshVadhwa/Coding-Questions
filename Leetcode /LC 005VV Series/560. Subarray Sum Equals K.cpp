class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        int ans = 0;
        unordered_map<int,int> map;

        map[0] = 1;

        for(int i : nums) {
            sum += i;

            if(map.count(sum-k)) {
                ans += map[sum-k];
            }

            map[sum]++;
        }

        return ans;
    }
};
