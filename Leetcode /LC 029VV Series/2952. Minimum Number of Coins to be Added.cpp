class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        int n = coins.size();
        sort(coins.begin(),coins.end());

        int curr_max = 0;
        int ans = 0;
        int index = 0;

        while(curr_max < target) 
        {
            if(index<n && coins[index]<=curr_max+1) {
                curr_max += coins[index++];
            }
            else {
                curr_max += curr_max+1;
                ans += 1;
            }
        }

        return ans;
    }
};
