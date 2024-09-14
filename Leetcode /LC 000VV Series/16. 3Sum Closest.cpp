class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());

        for(int i=0;i<n-2;i++)
        {
            int start = i+1, end = n-1;

            //two pointers 
            while(start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];

                if(sum==target) {
                    return sum;
                }

                if(abs(sum-target)<abs(ans-target)) {
                    ans = sum;
                }

                else if(sum < target) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }

        return ans;
    }
};
