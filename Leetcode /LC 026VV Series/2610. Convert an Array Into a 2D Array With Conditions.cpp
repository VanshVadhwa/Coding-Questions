class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;

        for(int i : nums) {
            map[i]++;
        }

        int rows = 0;
        for(auto pair : map) {
            rows = max(rows,pair.second);
        }

        vector<vector<int>> ans(rows);

        for (int i = 0; i < rows; i++) {
            for (auto it = map.begin(); it != map.end(); it++) {
                if (it->second > 0) {
                    ans[i].push_back(it->first);  
                    it->second--; 
                }
            }
        }

        return ans;
    }
};
