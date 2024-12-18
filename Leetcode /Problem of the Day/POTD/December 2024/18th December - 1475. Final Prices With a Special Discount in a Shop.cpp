class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(prices.begin(),prices.end());
        stack<int> st;

        // O(n) time and O(n) space
        for(int i=0;i<n;i++) {
            while(!st.empty() && prices[st.top()]>=prices[i]) {
                ans[st.top()] = prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }

        return ans;
    }
};
