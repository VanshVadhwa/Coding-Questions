#include<iostream>
using namespace std;

void bubbleSort(char arr[], int n) {
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
    char arr[9] = {'e','b','a','c','j','l','m','A','L'};
    bubbleSort(arr, 9);
    for(int i=0;i<9;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}