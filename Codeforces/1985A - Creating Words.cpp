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
    string s1, s2;
    cin >> s1 >> s2;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << endl;
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
