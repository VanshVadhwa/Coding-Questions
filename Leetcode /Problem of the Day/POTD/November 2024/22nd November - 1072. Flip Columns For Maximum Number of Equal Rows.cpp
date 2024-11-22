class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string,int> map;

        for(auto row : matrix) {
            string original = "";
            string flipped = "";

            for(int i : row) {
                original += to_string(i);
                flipped += to_string(1-i);
            }

            map[original]++;
            map[flipped]++;
        }

        int ans = 0;
        for(auto pair : map) {
            ans = max(ans,pair.second);
        }
        
        return ans;
    }
};
