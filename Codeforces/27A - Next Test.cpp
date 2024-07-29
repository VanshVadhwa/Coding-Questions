#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int findIndex(int arr[], int n)
{
    sort(arr, arr+n);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1) return i+1;
    }
    return n+1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[3002];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << findIndex(arr, n) << endl;
    
    return 0;
}

