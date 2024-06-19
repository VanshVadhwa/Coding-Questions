class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> map;

        int n = hours.size();
        int ans = 0;

        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if((hours[i]+hours[j])%24==0) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
