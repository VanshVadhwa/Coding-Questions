class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalGap = 0;
        int curr = 0, ans = 0;

        for(int i=0;i<n;i++) {
            totalGap += (gas[i]-cost[i]);
            curr += gas[i]-cost[i];
            if(curr < 0) {
                ans = i+1;
                curr = 0;
            }
        }

        return totalGap < 0 ? -1 : ans; 
    }
};
