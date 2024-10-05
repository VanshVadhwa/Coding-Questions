#include <iostream>
using namespace std;
 
int main() {
    long long n;
    long long k;
    cin >> n >> k;
    
    long long oddCount = (n+1)/2;
    
    if(k <= oddCount) {
        cout << k + (k-1);
    }
    else {
        cout << 2*(k-oddCount);
    }
    return 0;
}
