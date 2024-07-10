#include<iostream>
using namespace std;

bool AlmostPrime(int num) {
    int count = 0;

    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                count++;

                while (num % i == 0) {
                    num /= i;
                }
            }
        }
    }

    return count == 2;
}

int countAlmostPrime(int num) {
    int ans = 0;
    for(int i=1;i<=num;i++) {
        if(AlmostPrime(i)) {
            ans++;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    if(n<4) {
        cout << 0 << endl;
    }
    else {
        int ans = countAlmostPrime(n);
        cout << ans << endl;
    }
    return 0;
}
