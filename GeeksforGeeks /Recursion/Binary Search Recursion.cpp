//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
    int BinarySearch(vector<int>& arr, int start, int end, int target)
    {
        //base case(if target element not found)
        if(start > end) {
            return -1;
        }

        //finding mid element
        int mid = start + (end-start)/2;
    
        //base case(if element found, the return)
        if(arr[mid]==target) {
            return mid;
        }
    
        return arr[mid]<target ? BinarySearch(arr,mid+1,end,target) : BinarySearch(arr,start,mid-1,target);
    }
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        return BinarySearch(arr,0,arr.size()-1,k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
