#include<iostream>
using namespace std;

int findMinimum(int arr[], int n) {
    int start = 0, end = n-1, ans = arr[0];

    while(start <= end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] >= arr[0]) {
            start = mid+1;
        }

        else {
            ans = arr[mid];
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

    int ans = findMinimum(arr,n);
    cout << ans << endl;
    return 0;
}