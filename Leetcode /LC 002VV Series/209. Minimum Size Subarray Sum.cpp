class Solution {
private:
    bool isValidWindow(int size, vector<int>& nums, int target) {
        int n = nums.size(), sum = 0, left = 0, ans = 0;
        for(int right=0;right<n;right++) {
            sum += nums[right];
            if(right-left+1==size) {
                if(sum >= target) ans = sum;
                sum -= nums[left++];
            }
        }
        return ans >= target ? true : false;
    }
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int start = 1, end = n, ans = 0;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(isValidWindow(mid,nums,target)) {
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
