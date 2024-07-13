#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        int start = 0, end = n-1;
        int ans = 0;

        while(start <= end) {
            int mid = start + (end-start)/2;

            if(arr[mid]<arr[mid+1]) {
                start = mid+1;
            }
            else if(arr[mid]>arr[mid+1]) {
                ans = mid;
                end = mid-1;
            }
        }

        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution sol;
    int peakIndex = sol.peakIndexInMountainArray(arr);
    cout << peakIndex << endl;

    return 0;
}
