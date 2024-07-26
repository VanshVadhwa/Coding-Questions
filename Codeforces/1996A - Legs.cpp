#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cstring>
using namespace std;
 
//int64_t
 
void runCases()
{
    int n;
    cin >> n;
    int minimum = n/4;
    if(n%4!=0) minimum++;
    cout << minimum << endl;
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
