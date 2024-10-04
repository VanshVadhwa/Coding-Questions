class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());
        long long ans = 0;
        int sum = skill[0] + skill[n-1];
        
        int start = 0, end = n-1;
        while(start < end)
        {
            if(skill[start]+skill[end] != sum) {
                return -1;
            }
            ans += (skill[start]*skill[end]);
            start++;
            end--;
        }
        return ans;
    }
};
