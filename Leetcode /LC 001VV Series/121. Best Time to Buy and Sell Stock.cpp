class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size(), mini = arr[0], ans = 0;

        for(int i=1;i<n;i++) {
            if(arr[i] < mini) {
                mini = arr[i];
            }
            else {
                ans = max(ans,arr[i]-mini);
            }
        }

        return ans;
    }
};
