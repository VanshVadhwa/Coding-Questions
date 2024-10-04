class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        //O(1) Space && O(n) Time
        int n = skill.size();
        vector<int> freq(1001,0);
        long long totalSum = 0;

        for(int i : skill) {
            freq[i]++;
            totalSum += i;
        }

        long long targetSum = totalSum / (n/2);
        long long ans = 0;

        for(int i=1;i<=1000;i++)
        {
            while(freq[i] > 0)
            {
                int complement = targetSum - i;
                if(complement < 1 || complement > 1000 || freq[complement]==0) {
                    return -1;
                }
                ans += (long long)i * complement;
                freq[i]--;
                freq[complement]--;
            }
        }
        return ans;
    }
};
