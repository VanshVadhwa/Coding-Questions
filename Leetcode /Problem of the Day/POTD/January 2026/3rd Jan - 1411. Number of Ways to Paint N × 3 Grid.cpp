class Solution {
    using ll = long long;
    using vi = vector<int>;
    using pii = pair<int,int>;
    using vvi = vector<vector<int>>;
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;

        ll A = 6, B = 6;

        for(int i=2;i<=n;i++) {
            ll n_A = (2*A + 2*B) % MOD;
            ll n_B = (2*A + 3*B) % MOD;

            A = n_A, B = n_B;
        }

        return (A+B) % MOD;
    }
};
