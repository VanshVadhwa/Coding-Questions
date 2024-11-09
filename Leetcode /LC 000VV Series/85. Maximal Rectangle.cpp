class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> heights(col,0);
        int ans = 0;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++) {
                if(matrix[i][j]=='1')
                heights[j]++;
                else heights[j]=0;
            }
            //now histogram concept
            stack<int> st;
            for(int j=0;j<=col;j++) {
                int currHeight = (j==col) ? 0 : heights[j];
                while(!st.empty() && currHeight < heights[st.top()]) 
                {
                    int prevHeight = heights[st.top()];
                    st.pop();
                    int width = (st.empty()) ? j : j-st.top()-1;
                    ans = max(prevHeight*width, ans); 
                }
                st.push(j);
            }
        }

        return ans;
    }
};
