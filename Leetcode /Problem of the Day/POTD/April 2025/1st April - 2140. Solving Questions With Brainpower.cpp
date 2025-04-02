class Solution {
private:
    long long rec(vector<vector<int>>& questions, vector<long long>& dp, int i)
    {
        if(i >= questions.size()) return 0;
        if(dp[i] != -1) return dp[i];

        long long include = questions[i][0] + rec(questions,dp,questions[i][1]+i+1);
        long long exclude = rec(questions,dp,i+1);

        return dp[i] = max(include,exclude);
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n,-1);
        return rec(questions,dp,0);
    }
};
