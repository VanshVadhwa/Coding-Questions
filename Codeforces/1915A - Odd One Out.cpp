#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cstring>
using namespace std;

// int64_t

void runCases()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b) cout << c << endl;
    else if(a==c) cout << b << endl;
    else cout << a << endl;
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
