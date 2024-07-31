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
    int count = 5;

    int a,b,c;
    cin >> a >> b >> c;

    while(count!=0)
    {
        if(a<=b && a<=c) a++;
        else if(b<=a && b<=c) b++;
        else c++;
        count--;
    }

    cout << a*b*c << endl;
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
