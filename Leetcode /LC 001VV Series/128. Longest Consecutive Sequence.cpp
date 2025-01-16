class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int ans = 0;

        for(int i : seen) {
            if(seen.find(i-1) == seen.end()) {
                int num = i;
                int curr = 1;

                while(seen.find(num+1) != seen.end()) {
                    curr += 1;
                    num += 1;
                }

                ans = max(curr,ans);
            }
        }

        return ans;
    }
};
