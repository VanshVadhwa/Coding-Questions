class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // return is_permutation(arr.begin(), arr.end(), target.begin());
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        return unordered_multiset<int>(arr.begin(),arr.end()) ==unordered_multiset<int>(target.begin(), target.end());

        // int n = arr.size();
        // vector<int> alpha(1002, 0);

        // for(int num : arr) {
        //     alpha[num]++;
        // }

        // for(int num : target) {
        //     if(alpha[num]==0) return false;
        // }

        // return true;
    }
};
