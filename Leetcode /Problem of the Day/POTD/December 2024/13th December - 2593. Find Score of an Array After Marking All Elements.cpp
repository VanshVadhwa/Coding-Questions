class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> indexedNums;

        for (int i = 0; i < n; ++i) {
            indexedNums.push_back({nums[i], i});
        }

        sort(indexedNums.begin(), indexedNums.end());
        long long ans = 0;
        vector<bool> marked(n, false);

        for (auto [value, index] : indexedNums) {
            if (!marked[index]) {
                ans += value;
                marked[index] = true;   
                if (index > 0) marked[index - 1] = true;
                if (index < n - 1) marked[index + 1] = true;
            }
        }

        return ans;
    }
};
