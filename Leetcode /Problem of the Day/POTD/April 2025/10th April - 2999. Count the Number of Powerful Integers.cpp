class Solution {
    string suffix;
    int limit;
    long long dp[20][2];
    string numStr;

    long long dfs(int pos, bool tight) {
        if (pos == numStr.size()) return 1;

        if (dp[pos][tight] != -1) return dp[pos][tight];

        long long res = 0;
        int maxDigit = tight ? numStr[pos] - '0' : 9;
        int suffixStart = numStr.size() - suffix.size();

        if (pos >= suffixStart) {
            int idx = pos - suffixStart;
            int digit = suffix[idx] - '0';

            if (digit <= maxDigit && digit <= limit) {
                res += dfs(pos+1,tight && (digit == maxDigit));
            }
        } 
        else {
            for (int d=0;d <= maxDigit && d <= limit;d++) {
                res += dfs(pos+1,tight && (d == maxDigit));
            }
        }

        return dp[pos][tight] = res;
    }

    long long countValid(const string &number) {
        numStr = number;
        memset(dp, -1, sizeof(dp));
        return dfs(0, true);
    }

public:
    long long numberOfPowerfulInt(long long start, long long finish, int limit, const string &s) {
        this->limit = limit;
        this->suffix = s;

        long long suffixNum = stoll(s);
        if (finish < suffixNum) return 0;

        long long countToFinish = countValid(to_string(finish));
        long long countToStart = (start > suffixNum) ? countValid(to_string(start-1)) : 0;

        return countToFinish - countToStart;
    }
};
