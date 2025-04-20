class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> map;
        for(int i : answers) {
            map[i]++;
        }

        int ans = 0;
        for(auto pair : map) {
            ans += ((pair.second+pair.first)/(pair.first+1)) * (pair.first+1);
        }

        return ans;
    }
};
