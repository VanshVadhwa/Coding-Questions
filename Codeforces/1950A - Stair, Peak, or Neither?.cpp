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
    int a,b,c;

    cin >> a >> b >> c;

    if(a<b && b<c) cout << "STAIR" << endl;
    else if(a<b && b>c) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
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
