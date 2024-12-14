class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int left = 0;
        map<int,int> marked;

        for(int right=0;right<n;right++) {
            marked[nums[right]]++;
            while(!marked.empty() && (*marked.rbegin()).first - (*marked.begin()).first > 2) {
                marked[nums[left]]--;
                if(marked[nums[left]]==0) {
                    marked.erase(nums[left]);
                }
                left++;
            }
            ans += (right-left+1);
        }

        return ans;
    }
};
