#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i=n-1;i>=1;i--) {
        int index = i;
        for(int j=i-1;j>=0;j--) {
            if(arr[j]<arr[index]) {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}

int main() {
    int arr[6] = {10,8,2,3,1,4};
    selectionSort(arr, 6);
    for(int i=0;i<6;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
