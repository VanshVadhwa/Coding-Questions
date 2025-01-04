bool comp(vector<int> a, vector<int> b) {
    return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), comp);

        int ans = 0;
        int element = intervals[0][1];
        for(int i=1;i<n;i++) {
            if(intervals[i][0] < element) {
                ans++;
            }
            else {
                element = intervals[i][1];
            }
        }

        return ans;
    }
};
