class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> map;

        for(int i=0;i<n;i++) {
            int complement = target-nums[i];
            if(map.count(complement)) {
                return {map[complement],i};
            }
            map[nums[i]] = i;
        }

        return {-1,-1};
    }
};
