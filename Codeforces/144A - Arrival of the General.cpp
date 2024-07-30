#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[102];
    for(int i=0;i<n;i++) cin >> arr[i];
    int maxValue = 0, minValue = 103, minIndex = 0, maxIndex = 0;

    for(int i=0;i<n;i++) {
        maxValue = max(maxValue, arr[i]);
        minValue = min(minValue, arr[i]);
    } 

    for(int i=0;i<n;i++) {
        if(arr[i]==maxValue) {
            maxIndex = i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--) {
        if(arr[i]==minValue) {
            minIndex = i;
            break;
        }
    }

    if(maxIndex > minIndex) cout << maxIndex + n-2-minIndex;
    else cout << maxIndex + n-1-minIndex;

    return 0;
}
