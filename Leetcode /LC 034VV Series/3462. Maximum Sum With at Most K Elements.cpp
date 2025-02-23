class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        int n = grid.size();
        priority_queue<int> pq; 
        
        for (int i=0;i<n;i++) {
            sort(grid[i].rbegin(), grid[i].rend());

            for (int j=0;j<min(limits[i],(int)grid[i].size());j++) {
                pq.push(grid[i][j]);
            }
        }

        long long sum = 0;
        while (k-- > 0 && !pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};
