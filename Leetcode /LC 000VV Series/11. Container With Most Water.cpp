class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int start = 0, end = n-1;
        
        while(start < end)
        {
            ans = max(ans, min(height[start],height[end])*(end-start));
            if(height[start]<height[end]) {
                start++;
            }
            else {
                end--;
            }
        }

        return ans;
    }
};
