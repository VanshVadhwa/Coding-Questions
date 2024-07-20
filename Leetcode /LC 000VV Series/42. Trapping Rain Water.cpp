class Solution {
public:
    int trap(vector<int>& nums) {
      
      int n = nums.size();
      vector<int> maxLeft(n);
      vector<int> maxRight(n);

        maxLeft[0] = 0;
        maxRight[n-1] = 0;

        int leftmax = 0;
        int rightmax = 0;

        for(int i=1;i<n;i++)
        {
            leftmax = max(nums[i-1],leftmax);
            maxLeft[i] = leftmax;
        }

        for(int i=n-2;i>=0;i--)
        {
            rightmax = max(nums[i+1],rightmax);
            maxRight[i] = rightmax;
        }

        int minimum = 0;
        int fill = 0;
        for(int i=0;i<n;i++)
        {
            minimum = min(maxLeft[i],maxRight[i]);
            if(minimum - nums[i] > 0) {
                fill += minimum-nums[i];
            }
        }
        
        return fill;
    }
};
