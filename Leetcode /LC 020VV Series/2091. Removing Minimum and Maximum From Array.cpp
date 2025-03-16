class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX, minIndex = 0;
        int maxi = INT_MIN, maxIndex = 0;

        for(int i=0;i<n;i++) {
            if(nums[i] < mini) {
                mini = nums[i];
                minIndex = i;
            }
            if(nums[i] > maxi) { 
                maxi = nums[i];
                maxIndex = i;
            }
        }

        // left to right
        int first = max(minIndex+1,maxIndex+1);
        // right to left
        int second = max(n-minIndex,n-maxIndex);
        // left to right and right to left
        int third = min((minIndex+1+n-maxIndex),(maxIndex+1+n-minIndex));

        return min({first,second,third});
    }
};
