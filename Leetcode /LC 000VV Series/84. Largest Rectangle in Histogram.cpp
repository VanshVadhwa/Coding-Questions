class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int ans = 0;

        for(int i=0;i<=n;i++) {
            int currHeight = (i==n) ? 0 : heights[i];
            while(!st.empty() && currHeight < heights[st.top()]) 
            {
                int prevHeight = heights[st.top()];
                st.pop();
                int width = (st.empty()) ? i : i-st.top()-1;
                ans = max(ans, prevHeight*width);
            }
            st.push(i);
        }

        return ans;



        // O(n) time and O(n) space but with 3 traversals and extra space as well for vectors
        // int n = heights.size();
        // if(n==1) return heights[0];

        // vector<int>NSR(n,n);
        // stack<int> st1;
        // for(int i=0;i<n;i++) {
        //     while(!st1.empty() && heights[i]<heights[st1.top()]) {
        //         NSR[st1.top()] = i;
        //         st1.pop();
        //     }
        //     st1.push(i);
        // }

        // vector<int>NSL(n,-1);
        // stack<int> st2;
        // for(int i=n-1;i>=0;i--) {
        //     while(!st2.empty() && heights[i]<heights[st2.top()]) {
        //         NSL[st2.top()] = i;
        //         st2.pop();
        //     }
        //     st2.push(i);
        // }

        // int ans = 0;
        // for(int i=0;i<n;i++) {
        //     ans = max((NSR[i]-NSL[i]-1)*heights[i],ans);
        // }

        // return ans;
    }
};
