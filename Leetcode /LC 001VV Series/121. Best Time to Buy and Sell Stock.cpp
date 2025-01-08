class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;

        int mini = prices[0];
        for(int i=1;i<n;i++) {
            if(prices[i] > mini) {
                ans = max(ans,prices[i]-mini);
            }
            mini = min(mini,prices[i]);
        }

        return ans;
    }
};
