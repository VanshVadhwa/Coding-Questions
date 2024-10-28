class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        unordered_map<int,int> map;
        for(int i : nums) {
            map[i]++;
        }

        int ans = 0;

        for(int i=0;i<n;i++) {
            int len = 0;
            long long current = nums[i];
            while(map[current]>0) {
                len++;
                map[current] = 0;
                current *= current;
            }
            ans = max(len,ans);
        }

        return ans==1 ? -1 : ans;
    }
};
