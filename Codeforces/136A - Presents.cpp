#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        ans[arr[i]-1] = i+1;
    }

    for(int i=0;i<n;i++) cout << ans[i] << " ";

    return 0;

}
