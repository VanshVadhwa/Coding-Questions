#include<iostream>
using namespace std;

int peakElement(int arr[], int n)
{
    int start = 0, end = n-1, ans = 0;

    while(start <= end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]<arr[mid+1]) 
        {
            start = end+1;
        }
        else if(arr[mid]>arr[mid+1]){
            ans = mid;
            end = mid-1;
        }
    }

    return ans;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[100];
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int ans = peakElement(arr,n);
    cout << ans << endl;
    return 0;
}