class Solution {
private:
    int sumOfDigits(int n) {
        if(n<10) return n;
        return n%10 + sumOfDigits(n/10);
    }
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        unordered_map<int,int> map;

        for(int i=0;i<n;i++) {
            int sum = sumOfDigits(nums[i]);
            if(map.count(sum)) {
                ans = max(ans,nums[i]+map[sum]);
                map[sum] = max(map[sum],nums[i]);
            }
            else {
                map[sum] = nums[i];
            }
        }

        return ans;
    }
};
