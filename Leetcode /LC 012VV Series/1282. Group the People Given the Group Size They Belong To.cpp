class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        int n = groupSizes.size();
        unordered_map<int,vector<int>> map;

        for(int i=0;i<n;i++) {
            map[groupSizes[i]].push_back(i);
        }

        for(auto pair : map) {
            int size = pair.second.size();
            while(size) {
                vector<int> temp;
                for(int i=0;i<pair.first;i++) {
                    temp.push_back(pair.second[size-i-1]);
                    pair.second.pop_back();
                }
                ans.push_back(temp);
                size -= pair.first;
            }
        }

        return ans;
    }
};
