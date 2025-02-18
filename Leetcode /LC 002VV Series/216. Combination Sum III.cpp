class Solution {
private:
    void com(int numbers, int target, int num, vector<int>& temp, vector<vector<int>>& ans) {
        if(target == 0) {
            if(temp.size()==numbers) {
                ans.push_back(temp);
            }
            return;
        }
        if(target < 0 || num > 9 || temp.size() > numbers) return;

        com(numbers,target,num+1,temp,ans);
        temp.push_back(num);
        com(numbers,target-num,num+1,temp,ans);
        temp.pop_back();
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        com(k, n, 1, temp, ans);
        return ans;
    }
};
