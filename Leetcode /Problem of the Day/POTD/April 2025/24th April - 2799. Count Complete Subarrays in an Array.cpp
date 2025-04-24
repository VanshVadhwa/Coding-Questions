class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i : nums) {
            map[i]++;
        }

        int unique = map.size();
        map.clear();
        int left = 0, ans = 0;

        for(int right=0;right<n;right++) {
            map[nums[right]]++;
            if(map[nums[right]]==1) unique -= 1;
            while(unique <= 0) {
                ans += n-right;
                map[nums[left]]--;
                if(map[nums[left]]==0) unique += 1;
                left += 1;
            }
        }

        return ans;
    }
};
