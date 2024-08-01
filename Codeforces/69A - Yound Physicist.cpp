#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int sum_a = 0, sum_b=0, sum_c = 0;

    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin >> a >> b >> c;

        sum_a += a;
        sum_b += b;
        sum_c += c;
    }

    if(sum_a==0 && sum_b==0 && sum_c==0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
