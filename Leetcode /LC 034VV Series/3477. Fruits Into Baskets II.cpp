class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int ans = n;
        vector<bool> marked(101,false);

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(!marked[j] && baskets[j] >= fruits[i]) {
                    ans -= 1;
                    marked[j] = true;
                    break;
                }
            }
        }

        return ans;
    }
};
