class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size();
        int n = size*size;

        for(int i=0;i<size;i++) {
            for(int j=0;j<size;j++) {
                int num = (grid[i][j]-1)%n;
                int rowIndex = num/size;
                int colIndex = num%size;
                grid[rowIndex][colIndex] += n;
            }
        }

        int missing = 0, repeating = 0, count = 1;
        for(int i=0;i<size;i++) {
            for(int j=0;j<size;j++) {
                if(grid[i][j] > 2*n) {
                    repeating = count;
                }
                else if(grid[i][j] <= n) {
                    missing = count;
                }
                count += 1;
            }
        }

        return {repeating,missing};
    }
};
