class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>,int> map;

        for(int i=0;i<n;i++) {
            vector<int> temp(n);
            for(int j=0;j<n;j++) {
                temp[j] = grid[i][j];
            }
            map[temp]++;
        }

        int ans = 0;
        for(int i=0;i<n;i++) {
            vector<int> temp(n);
            for(int j=0;j<n;j++) {
                temp[j] = grid[j][i];
            }
            if(map.count(temp)) ans += map[temp];
        }   

        return ans;
    }
};
