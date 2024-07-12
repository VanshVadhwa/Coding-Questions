#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int start = 0;
        int end = n-1;
        int first = -1, last = -1;

        while(start <= end) 
        {
            int mid = start + (end-start)/2;

            if(nums[mid]==target) {
                first = mid;
                end = mid-1;
            }

            else if(nums[mid] < target) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
            
        }

        start = 0;
        end = n - 1;
        while(start <= end) 
        {
            int mid = start + (end-start)/2;

            if(nums[mid]==target) {
                last = mid;
                start = mid+1;
            }

            else if(nums[mid] < target) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }

        return {first,last};
}

int main() {
    vector<int> v = {1,2,3,4,4,4,5}; 
    int target;
    cin >> target;
    vector<int> ans = searchRange(v, target);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
