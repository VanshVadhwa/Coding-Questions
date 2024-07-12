#include<iostream>
using namespace std;

int countZeroes(int arr[], int n) {
        int start = 0, end = n-1;
        
        while(start <= end) {
            int mid = start + (end-start)/2;
            
            if(arr[mid] > 0) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return n-start;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = countZeroes(arr,n);
    cout << ans << endl;
    return 0;
}