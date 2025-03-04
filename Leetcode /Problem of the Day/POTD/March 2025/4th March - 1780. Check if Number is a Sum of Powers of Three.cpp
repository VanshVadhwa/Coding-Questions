class Solution {
private:
    bool subSum(vector<int>& nums, int index, int target) {
        if(target == 0) {
            return true;
        }
        if(index==nums.size() || target < 0) return false;

        bool exclude = subSum(nums,index+1,target);
        bool include = subSum(nums,index+1,target-nums[index]);

        return include || exclude;
    }
public:
    bool checkPowersOfThree(int n) {
        vector<int> arr;
        int base = 1, limit = 1e7;
        
        for(;base<=limit;base*=3) {
            arr.push_back(base);
        }

        return subSum(arr,0,n);
        
    }
};
