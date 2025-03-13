class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n+1,0);
        int m = bookings.size();

        for(int i=0;i<m;i++) {
            ans[bookings[i][0]-1] += bookings[i][2]; 
            ans[bookings[i][1]] -= bookings[i][2]; 
        }

        for(int i=1;i<=n;i++) {
            ans[i] += ans[i-1];
        }

        ans.pop_back();
        return ans;
    }
};
