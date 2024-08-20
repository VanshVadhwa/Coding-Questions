class Solution {
    long long reverse(int n) {
        int rem = 0, ans = 0;
        while(n)
        {
            rem = n%10;
            ans = ans*10 + rem;
            n /= 10;
        }
        return ans;
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<long long> set(nums.begin(), nums.end());

        for(int i=0;i<n;i++)
        {
            long long rev = reverse(nums[i]);
            set.insert(rev);
        }

        return set.size();
    }
};
