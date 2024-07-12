#include<iostream>
using namespace std;

int insertPosition(int arr[], int n, int k) 
{
    int start = 0;
    int end = n-1;
    int index = n;

    while(start <= end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]==k) {
            return mid;
        }

        if(arr[mid]>k) {
            index = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return index;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int ans = insertPosition(arr, n, target);
    cout << ans << endl;
    return 0;
}