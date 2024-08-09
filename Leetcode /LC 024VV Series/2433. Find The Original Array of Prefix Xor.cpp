class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();

        int prev = pref[0];
        int temp;

        for(int i=1;i<n;i++)
        {
            temp = prev ^ pref[i];
            prev = pref[i];
            pref[i] = temp;
        }

        return pref;
    }
};
