#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int>& dp) {
    if(n<=1) return n;

    if(dp[n] != -1) return dp[n];

    int oneJump = fib(n-1,dp);
    int twoJump = fib(n-2,dp);

    return dp[n] = oneJump + twoJump;
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1,-1);
    cout << fib(n,dp) << endl;
    return 0;
}
