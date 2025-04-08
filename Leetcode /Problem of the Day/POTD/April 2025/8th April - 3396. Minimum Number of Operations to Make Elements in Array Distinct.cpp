class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int left = 0, ans = 0;
        unordered_map<int,int> map;

        for(int right=0;right<n;right++) {
            map[nums[right]]++;
            while(right-left >= 2 && map[nums[right]] > 1) 
            {
                int limit = left+3;
                while(left < limit) {
                    map[nums[left++]]--;
                    if(map[nums[left]]==0) map.erase(nums[left]); 
                }
                ans += 1;   
            }
        }

        for(auto pair : map) {
            if(pair.second > 1) return ans+1;
        }

        return ans;
    }
};
