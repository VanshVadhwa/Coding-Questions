class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> set;
        for(int i : banned) {
            set.insert(i);
        }

        int sum = 0;
        int ans = 0;

        for(int i=1;i<=n;i++) {
            if(set.find(i) == set.end()) {
                sum += i;
                if(sum > maxSum) return ans;
                ans++;
            }
        }

        return ans;
    }
};
