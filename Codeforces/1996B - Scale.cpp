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
    int n, k;
    cin >> n >> k;
 
    vector<vector<char>> matrix(n, vector<char>(n));
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
        }
    }
 
    for(int i=0;i<n;i+=k)
    {
        for(int j=0;j<n;j+=k)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
 
    // if(k>=n) cout << 0 << endl; 
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
