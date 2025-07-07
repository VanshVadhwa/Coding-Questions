class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n = events.size(), ans = 0;
        int maxi = INT_MIN;

        for(int i=0;i<n;i++) {
            maxi = max(events[i][1], maxi);
        }

        set<int> set;
        for(int i=0;i<=maxi;i++) set.insert(i);

        sort(events.begin(), events.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });

        for(int i=0;i<n;i++) {
            auto it = set.lower_bound(events[i][0]);

            if(it != set.end() && *it <= events[i][1]) {
                ans += 1;
                set.erase(it);
            }
        }

        return ans;
    }
};
