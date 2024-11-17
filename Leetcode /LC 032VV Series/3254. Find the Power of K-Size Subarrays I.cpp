class Solution {
private:
    bool isSorted(vector<int>& nums, int start, int end) {
        for(int i=start;i<end;i++) {
            if(nums[i]+1!=nums[i+1]) return false;
        }
        return true;
    }
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1);
        int index = 0;

        for(int i=k-1;i<n;i++) {
            if(isSorted(nums,index,i)) {
                ans[index] = nums[i];
            }
            else {
                ans[index] = -1;
            }
            index++;
        }

        return ans;
    }
};
