class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n);
        int index = 0;
        for(int i : arr) {
            temp[index] = i;
            index++;
        }
        sort(temp.begin(), temp.end());

        unordered_map<int, int> map;
        int rank = 1;
        
        for (int i=0; i<n; i++) {
            if (map.find(temp[i]) == map.end()) {
                map[temp[i]] = rank;
                rank++;
            }
        }
        
        for (int i = 0; i < n; ++i) {
            arr[i] = map[arr[i]];
        }
        
        return arr;
    }
};
