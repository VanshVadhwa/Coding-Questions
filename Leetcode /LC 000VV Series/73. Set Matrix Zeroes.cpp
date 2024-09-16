class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<bool> rows(200,false), cols(200,false);

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0) {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }

        //row zeroes
        for(int i=0;i<row;i++)
        {
            if(rows[i]) {
                for(int j=0;j<col;j++) {
                    matrix[i][j] = 0;
                }       
            }
        }

        //col zeroes
        for(int i=0;i<col;i++)
        {
            if(cols[i]) {
                for(int j=0;j<row;j++) {
                    matrix[j][i] = 0;
                }       
            }
        }
    }
};
