class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size(), index = 0;
        vector<int> ans(n,0);
 
        for(int i : nums) {
            if(i < pivot) {
                ans[index++] = i;
            }
        }
        for(int i : nums) {
            if(i == pivot) {
                ans[index++] = i;
            }
        }
        for(int i : nums) {
            if(i > pivot) {
                ans[index++] = i;
            }
        }

        return ans;
    }
};
