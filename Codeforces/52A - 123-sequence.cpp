#include<iostream>
using namespace std;

int minimumWays(int arr[], int n)
{
    int maximum = 0;

    if(n==1) return 0;
    if(n==2) {
        return(arr[0]==arr[1]) ? 0:1;
    }

    for(int i=0;i<n;i++) arr[i]--;

    for(int i=0;i<n;i++)
    {
        arr[arr[i]%3] += 3;
    }
    for(int i=0;i<3;i++)
    {
        maximum = max(maximum, arr[i]/3);
    }

    return n-maximum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int arr[1000002];
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << minimumWays(arr, n) << endl;
    return 0;
}
