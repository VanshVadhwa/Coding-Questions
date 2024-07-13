//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int target) {
        // complete the function here
        int n = arr.size();
        
        int start = 0, end = n-1;
        
        while(start <= end) 
        {
            int mid = start + (end-start)/2;
            
            if(arr[mid]==target) {
                return mid;
            }
            
            else if(arr[mid]>=arr[0]) {
                if(target<=arr[mid] && target>=arr[start]) {
                    end = mid-1;
                }
                else {
                    start = mid+1;
                }
            }
            
            else {
                if(target<=arr[end] && target>=arr[mid]) {
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends
