#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) 
{
    int start = 0;
    int end = n-1;

    while(start <= end) 
    {
        int mid = start + (end-start)/2;

        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid] < key) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    int n,k;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element: ";
    cin >> k;
    int ans = binarySearch(arr, n, k);
    cout << "You element is present at index " << ans << endl;
}
