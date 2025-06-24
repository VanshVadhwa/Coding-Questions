class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<pair<int,int>> vp;

        for(int i=0;i<n;i++) {
            vp.push_back({capacity[i],rocks[i]});
        }

        sort(vp.begin(), vp.end(), [](pair<int, int> &a, pair<int, int> &b) {
            return a.first-a.second < b.first-b.second;
        });

        int ans = 0;
        for(int i=0;i<n;i++) {
            additionalRocks -= vp[i].first-vp[i].second;
            if(additionalRocks >= 0)
            ans += 1;
            else break;
        }

        return ans;
    }
};
