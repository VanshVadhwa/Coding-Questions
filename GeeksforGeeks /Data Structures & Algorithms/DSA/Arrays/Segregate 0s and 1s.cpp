//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int start = 0, end = n-1;
        
        while(start < end)
        {
            if(arr[start]==0) {
                start++;
            }
            
            else {
                if(arr[end]==0) {
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
                }
                else {
                    end--;
                }
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
