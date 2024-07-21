class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ones = 0;
        int maxOnes = 0;
        int index = 0;

        int row = mat.size();
        int col = mat[0].size();

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1) 
                ones++;
            }
            if(maxOnes < ones) {
                maxOnes = ones;
                index = i;
            }
            ones = 0;
        }

        return {index,maxOnes};
    }
};
