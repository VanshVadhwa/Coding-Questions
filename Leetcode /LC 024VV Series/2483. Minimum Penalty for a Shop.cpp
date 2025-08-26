class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();

        vector<int> open(n+1, 0);   
        vector<int> close(n+1, 0);  

        for(int i=0;i<n;i++) {
            open[i+1] = open[i] + (customers[i]=='N');
            close[i+1] = close[i] + (customers[i]=='Y');
        }

        int ans = 0, mini = INT_MAX;

        for(int i=0;i<=n;i++) {
            int penalty = open[i] + (close[n] - close[i]);
            if(penalty < mini) {
                mini = penalty;
                ans = i;
            }
        }

        return ans;
    }
};
