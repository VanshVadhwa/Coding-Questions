class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        int count1 = 0, count2 = 0;

        for(int i : nums1) {
            sum1 += i;
            if(i == 0) count1 += 1;
        }

        for(int i : nums2) {
            sum2 += i;
            if(i==0) count2 += 1;
        }

        if((sum1+count1 > sum2 && !count2) || (sum2+count2 > sum1 && !count1)) return -1;
        return max(sum1 + count1, sum2 + count2);
    }
};
