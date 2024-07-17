#include<iostream>
#include<cmath>
using namespace std;

int ways(int arr[], int n, long long d)
{
    int count = 0;

    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++)
        {
            if((abs(arr[i]-arr[j]) <= d))
            {
                count+=2;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    long long d;
    cin >> n >> d;
    int arr[1002];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = ways(arr,n,d);
    cout << ans << endl;
    return 0;
}
