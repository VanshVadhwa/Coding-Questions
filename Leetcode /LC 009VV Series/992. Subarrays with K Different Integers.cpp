class Solution {
private:
    int atMost(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> marked(n+1,0);
        int left = 0;
        int ans = 0;
        int count = 0;
        for(int right=0;right<n;right++) 
        {
            marked[nums[right]]++;
            if(marked[nums[right]]==1) {
                count+=1;
            } 
            while(left<=right && count>k) {
                marked[nums[left]]--;
                if(marked[nums[left]]==0) {
                    count -= 1;
                }
                left++;
            }
            ans += right-left;
        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};
