class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> map;
        for(int i : arr) {
            map[i]++;
        }

        unordered_map<int,bool> freq;
        for(auto pair : map) {
            if(freq.count(pair.second)) return false;
            freq[pair.second] = true;
        }

        return true;
    }
};
