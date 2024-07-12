#include<iostream>
using namespace std;

void selectionSort(char arr[], int n) {
    for(int i=0;i<n-1;i++) {
        int index = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}

int main() {
    char arr[9] = {'e','b','a','c','j','l','m','A','L'};
    selectionSort(arr, 9);
    for(int i=0;i<9;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}