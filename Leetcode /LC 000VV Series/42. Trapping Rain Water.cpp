class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxLeft = height[0], maxRight = height[n-1];
        int left = 0, right = n-1, ans = 0;

        while(left <= right) {
            if(height[left] <= height[right]) {
                if(height[left] <= maxLeft) {
                    ans += maxLeft - height[left];
                }
                else {
                    maxLeft = height[left];
                }
                left++;
            }
            else { 
                if(height[right] <= maxRight) {
                    ans += maxRight - height[right];
                }
                else {
                    maxRight = height[right];
                }
                right--;
            }
        }

        return ans;
    }
};
