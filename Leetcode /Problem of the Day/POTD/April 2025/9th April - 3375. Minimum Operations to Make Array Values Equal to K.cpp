class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int mini = *min_element(nums.begin(), nums.end());
        if(mini < k) return -1;
        unordered_set<int> set(nums.begin(),nums.end());
        return set.size() - (mini==k);
    }
};
