class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n != original.size()) {
            return {};
        }

        vector<vector<int>> matrix;
        matrix.reserve(m);

        for(int i=0;i<m;i++) {
            matrix.emplace_back(vector<int>(original.begin()+i*n, original.begin()+(i+1)*n));
        }

        return matrix;
    }
};
