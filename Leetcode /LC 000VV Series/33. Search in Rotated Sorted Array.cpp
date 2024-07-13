#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int start = 0, end = n-1, ans = nums[0];

        while(start <= end)
        {
            int mid = start+(end-start)/2;

            if(nums[mid]>=nums[0]) {
                start = mid+1;
            }
            else {
                ans = nums[mid];
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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    int ans = sol.findMin(arr);
    cout << ans << endl;

    return 0;
}
