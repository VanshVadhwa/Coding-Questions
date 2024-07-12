#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) 
{
    int start = 0;
    int end = n-1;

    while(start <= end) {
        int mid = start+(end-start)/2;

        if(arr[mid]==target) {
            return mid;
        }
        if(arr[mid]<target) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[5]={30,28,20,16,4};
    int k;
    cout << "Enter the target value: ";
    cin >> k;
    cout << binarySearch(arr, 5, k);
}