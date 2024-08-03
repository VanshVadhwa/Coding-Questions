class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
      return is_permutation(arr.begin(), arr.end(), target.begin());
    }
};
