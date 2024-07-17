#include<iostream>
using namespace std;

string isPossible(int n, int m)
{
    if(m>n) {
        return "No";
    }
    int ans = n-m;
    if(ans%2==0) {
        return "Yes";
    }
    return "No";
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n,m;
        cin >> n >> m;
        string ans = isPossible(n,m);
        cout << ans << endl;   
    }
    return 0;
}
