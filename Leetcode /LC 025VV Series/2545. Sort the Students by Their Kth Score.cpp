class Solution {
private:
    void insertionSort(vector<vector<int>>& score, int k)
    {
        int rows = score.size();
        for(int i=1;i<rows;i++)
        {
            for(int j=i;j>0;j--)
            {
                if(score[j][k] > score[j-1][k]) {
                    swap(score[j], score[j-1]);
                }
                else {
                    break;
                }
            }
        }
    }
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        insertionSort(score, k);
        return score;
    }
};
