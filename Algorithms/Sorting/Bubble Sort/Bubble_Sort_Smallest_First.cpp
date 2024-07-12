#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) 
{
    for(int i=0;i<n-1;i++) 
    {
        bool swapped = false;
        for(int j=n-1;j>i;j--) 
        {
            if(arr[j]<arr[j-1]) {
                swap(arr[j],arr[j-1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }
}
// void bubbleSort(int arr[], int n) 
// {
//     bool swapped = false;
//     for(int i=0;i<n-1;i++) 
//     {
//         for(int j=n-i-1;j>0;j--) 
//         {
//             if(arr[j]<arr[j-1]) {
//                 swap(arr[j],arr[j-1]);
//                 swapped = true;
//             }
//         }
//         if(!swapped) {
//             break;
//         }
//     }
// }

int main() {
    int arr[5] = {7,4,8,5,3};
    bubbleSort(arr, 5);
    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}