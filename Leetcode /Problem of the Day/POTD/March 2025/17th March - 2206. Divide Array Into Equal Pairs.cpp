class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        int marked[501];

        for(int i : nums) {
            marked[i]++;
        }

        for(int i : nums) {
            if(marked[i]%2 != 0) return false;
        }

        return true;
    }
};
