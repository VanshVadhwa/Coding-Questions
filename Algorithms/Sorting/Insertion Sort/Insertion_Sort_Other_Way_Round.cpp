#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i=1;i<n;i++) {
        for(int j=n-i-1;j<n;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
            else {
                break;
            }
        }
    }
}

int main() {
    int arr[5] = {7,5,2,4,3};
    insertionSort(arr, 5);
    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}