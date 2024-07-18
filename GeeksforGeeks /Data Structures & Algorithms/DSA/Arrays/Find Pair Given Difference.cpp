class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_set<int> seen;
        
        for(int i=0; i<n; i++) {
            if(seen.find(arr[i] + x) != seen.end()) {
                return 1;
            }
            if(seen.find(arr[i] - x) != seen.end()) {
                return 1;
            }
            seen.insert(arr[i]);
        }
        
        return -1;
    }
};
