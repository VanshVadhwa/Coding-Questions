class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int start = 1;
        int end = *max_element(nums.begin(),nums.end());
        int ans = end;

        while(start <= end) {
            int mid = start + (end-start)/2;

            long long count = 0;

            for(int i=0;i<n;i++) {
                count += (nums[i]-1)/mid;
            }

            if(count <= maxOperations) {
                ans = mid;
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }

        return ans;
        
    }
};
