#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        int start = 0, end = n-1;

        while(start < n && arr[start]==0) {
            start++;
        }
        if(start==n) {
            cout << 0 << endl;
            continue;
        }
        while(end >= 0 && arr[end]==0) {
            end--;
        }
        if(end==-1) {
            cout << 0 << endl;
            continue;
        }
        int ans = 1;
        for(int i=start;i<=end;i++) {
            if(arr[i]==0) {
                ans = 2;
                break;
            }
        }
        cout << ans << endl;
    }
}
