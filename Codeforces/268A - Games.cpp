#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(2,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >> grid[i][j];
        }
    }

    int count = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][0]==grid[j][1]) count++;
        }
    }

    cout << count << endl;
    return 0;
}
