class Solution {
public:
    int minPatches(vector<int>& nums, int target) {
        int n = nums.size();
                
        long long curr_max = 0;
        int ans = 0;
        int index = 0;

        while(curr_max < target) 
        {
            if(index<n && nums[index]<=curr_max+1) {
                curr_max += nums[index++];
            }
            else {
                curr_max += curr_max+1;
                ans += 1;
            }
        }

        return ans;
    }
};
