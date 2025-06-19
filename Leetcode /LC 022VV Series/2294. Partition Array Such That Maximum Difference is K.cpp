class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();

        // O(maxi) space and O(n) Time approach
        int maxi = *max_element(nums.begin(),nums.end());
        vector<int> counting(maxi+1,0);

        for(int i : nums) {
            counting[i]++;
        }

        int ans = 0;
        for(int i=0;i<=maxi;i++) {
            if(counting[i] > 0) {
                int mini = i;
                for(;i<=maxi;i++) {
                    if(counting[i] > 0) {
                        if(i-mini > k) break;
                    }
                }
                i -= 1;
                ans += 1;
            }
        }

        return ans;
    }
};
