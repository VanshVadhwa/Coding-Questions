class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int curr = INT_MIN;

        for(int i : nums) {
            int mini = i-k, maxi = i+k;
            if(curr<mini) {
                curr = mini;
                ans++;
            }
            else if(curr<maxi) {
                curr = curr+1;
                ans++;
            }
        }

        return ans;
    }
};
