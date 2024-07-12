#include<iostream>
using namespace std;

// void bubbleSort(int arr[], int n) {
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             if(arr[j]>arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         } 
//     }
// }

void bubbleSort(int arr[], int n) {
    bool count = false;
    for(int i=n-2;i>=0;i--) {
        for(int j=0;j<=i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                count = true;
            }
        }
        if(!count) {
            break;
        }
    }
}

int main() {
    int arr[5] = {7,4,8,5,3};
    bubbleSort(arr, 5);
    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}