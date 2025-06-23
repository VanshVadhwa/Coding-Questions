// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int tt;
    cin >> tt;
    
    while(tt--)
    {
        int n, pos;
        cin >> n >> pos;
        int mini = 100, maxi = 0;
        
        for(int i=0;i<n;i++) {
            int num;
            cin >> num;
            mini = min(mini,num);
            maxi = max(maxi,num);
        }
        
        int ans = 0;
        if(pos>=maxi) {
            ans = pos-mini;
        }
        else if(pos <= mini) {
            ans = maxi-pos; 
        }
        else if(pos < maxi) {
            if(pos-mini <= maxi-pos) {
                ans = 2*(pos-mini) + maxi-pos;
            }
            else {
                ans = 2*(maxi-pos) + (pos-mini);
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}
