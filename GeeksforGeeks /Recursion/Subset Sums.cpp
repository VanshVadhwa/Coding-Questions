//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void subsetSum(vector<int>& nums, int index, int n, vector<int>& ans, int sum) {
        //base case
        if(index==n) {
            ans.push_back(sum);
            return;
        }
    
        //non include
        subsetSum(nums,index+1,n,ans,sum);
    
        //include
        sum += nums[index];
        subsetSum(nums,index+1,n,ans,sum);
    }
  public:
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> ans;
        int sum = 0;
        subsetSum(arr,0,n,ans,sum);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
