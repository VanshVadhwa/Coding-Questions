class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> minrow;
        for(int i=0;i<m;i++)
        {
            int mini = INT_MAX;
            for(int j=0;j<n;j++) 
            {
                mini = min(matrix[i][j], mini);
            }
            minrow.push_back(mini);
        } 

        vector<int> maxcol;
        for(int i=0;i<n;i++)
        {
            int maxi = 0;
            for(int j=0;j<m;j++) 
            {
                maxi = max(matrix[j][i], maxi);
            }
            maxcol.push_back(maxi);
        } 

        vector<int> ans;
        for(int i=0;i<minrow.size();i++) {
            for(int j=0;j<maxcol.size();j++) {
                if(minrow[i]==maxcol[j]) {
                    ans.push_back(minrow[i]);
                }
            }
        }

        return ans;
    }
};
