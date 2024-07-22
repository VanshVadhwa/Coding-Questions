#include <bits/stdc++.h> 
vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    int row = mat.size();
    int col = mat[0].size();
    vector<int> ans;

    for(int i=0;i<row;i++)
    {
        if(i%2 == 0)
        {
            for(int j=0;j<col;j++) 
            {
                ans.push_back(mat[i][j]);
            }
        }
        else 
        {
            for(int j=col-1;j>=0;j--)
            {
                ans.push_back(mat[i][j]);
            }
        }
    }
    return ans;
}
