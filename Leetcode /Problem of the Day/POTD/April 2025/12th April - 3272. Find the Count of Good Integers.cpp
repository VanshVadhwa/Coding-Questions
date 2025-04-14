class Solution {
public:
    int n, k;
    unordered_set<string> uniq;
    unordered_map<string,bool> memo;

    bool isValid(const string &s) {
        if(s[0] == '0') return false;
        if(memo.count(s)) return memo[s];
        return memo[s] = stoll(s)%k == 0;
    }

    void dfs(string &half, int i, int m, bool odd) {
        if (i == m) {
            string t = half;
            for (int j = m - (odd ? 2 : 1);j>=0;j--) {
                t += half[j];
            }
            if (isValid(t)) {
                string sorted = t;
                sort(sorted.begin(),sorted.end());
                uniq.insert(sorted);
            }
            return;
        }
        for (char d='0';d<='9';d++) {
            half[i] = d;
            dfs(half, i + 1, m, odd);
        }
    }

    long long countGoodIntegers(int _n, int _k) {
        n = _n, k = _k;
        int m = (n + 1) / 2;
        bool odd = n % 2;
        string half(m, '0');
        dfs(half, 0, m, odd);

        vector<long long> fact(n + 1, 1);
        for (int i=1;i<=n;i++) fact[i] = fact[i-1] * i;

        long long res = 0;
        for (auto &s : uniq) {
            vector<int> cnt(10);
            for (char c : s) cnt[c - '0']++;
            long long cur = 0;
            for (int i=1;i<10;i++) {
                if (!cnt[i]) continue;
                cnt[i]--;
                long long ways = fact[n-1];
                for (int x : cnt) ways /= fact[x];
                cur += ways;
                cnt[i]++;
            }
            res += cur;
        }
        return res;
    }
};
