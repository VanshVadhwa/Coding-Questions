class Solution {
private:
    int countSetBits(int num) {
        int ans = 0;
        while(num != 0) {
            ans += num%2;
            num /= 2;
        }
        return ans;
    }
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i=1;i<n;i++) {
            for(int j=i;j>0;j--) {
                if(nums[j]<nums[j-1] && countSetBits(nums[j])==countSetBits(nums[j-1])) {
                    swap(nums[j],nums[j-1]);
                }
                else {
                    break;
                }
            }
        }

        for(int i=0;i<n-1;i++) {
            if(nums[i]>nums[i+1]) {
                return false;
            }
        }

        return true;
    }
};
