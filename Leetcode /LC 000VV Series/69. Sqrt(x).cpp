#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int n) {
        long long int s=0;
        long long int e=n;
        long long int mid=s + (e-s)/2;
        int ans=-1;

        while(s<=e) {
            long long int square=mid*mid;

            if(square==n) {
                return mid;
            }
            else if(square < n) {
                ans = mid;
                s=mid+1;
            }
            else {
                e=mid-1;
            }
            mid=s + (e-s)/2;
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int n = 16; 
    cout << "Square root of " << n << " is: " << obj.mySqrt(n) << endl;
    
    return 0;
}
