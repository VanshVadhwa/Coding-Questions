class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return {0};

        //prefix sum
        vector<int> prefix(n,0);
        prefix[0] = 0;
        prefix[1] = nums[0];
        int temp = nums[0]+nums[1];
        for(int i=2;i<n;i++)
        {
            prefix[i] = temp;
            temp+=nums[i];
        }

        //suffix sum
        vector<int> suffix(n,0);
        suffix[n-1] = 0;
        suffix[n-2] = nums[n-1];
        temp = nums[n-1] + nums[n-2];
        for(int i=n-3;i>=0;i--)
        {
            suffix[i] = temp;
            temp += nums[i];
        }

        //answer vector
        for(int i=0;i<n;i++)
        {
            nums[i] = abs(prefix[i]-suffix[i]);
        }

        return nums;
    }
};
