class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int n = row*col;

        unordered_map<int,pair<int,int>> map;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                map[mat[i][j]] = {i,j};
            }
        }

        vector<int> rows(row,0);
        vector<int> cols(col,0);

        for(int i=0;i<n;i++) {
            int first = map[arr[i]].first; 
            int second = map[arr[i]].second;
            rows[first]++;
            cols[second]++;
            if(rows[first]==col || cols[second]==row) return i;
        }

        return 0;
    }
};
