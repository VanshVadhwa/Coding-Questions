#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cstring>
using namespace std;

void runCases()
{
    int n;
    cin >> n;

    if(n%2!=0) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i=0;i<(n+n/2);i+=3)
        {
            cout << 'A' << 'A' << 'B';
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        runCases();
    }
    return 0;
}
