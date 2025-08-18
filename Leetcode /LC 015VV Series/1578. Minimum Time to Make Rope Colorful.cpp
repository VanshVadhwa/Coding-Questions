1578. Minimum Time to Make Rope Colorful
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, n = colors.length();
        int prevLeft = neededTime[0];

        for(int i=1;i<n;i++) {
            if(colors[i] == colors[i-1]) {
                ans += min(prevLeft,neededTime[i]);
                prevLeft = max(prevLeft,neededTime[i]);
            }
            else {
                prevLeft = neededTime[i];
            }
        }

        return ans;
    }
};
