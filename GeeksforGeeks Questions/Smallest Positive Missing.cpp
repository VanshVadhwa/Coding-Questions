//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        // int maximum = INT_MIN;
        // for(int i=0;i<n;i++) {
        //     maximum = max(maximum, arr[i]);
        // }
        
        // int ans = 0;
        
        // for(int i=0;i<n;i++) {
        //     if(arr[i]>0) {
        //         ans = min(maximum, arr[i]);
        //     }
        // }
        
        // return ans;
        
        // int ans = 0;
            
        // unordered_set<int> set;
        
        // for(int i=0;i<n;i++) {
        //     if(arr[i]>0) {
        //         set.insert(arr[i]);
        //     }
        // }
        
        // vector<int> pos(set.begin(), set.end());
        // sort(pos.begin(), pos.end());
        
        // for(int i=0;i<pos.size();i++) {
        //     if(pos[i] != i+1) {
        //         return i+1;
        //     }
        // }
        
        // return pos.size()+1;
        
        for(int i=0;i<n;i++) {
            while(arr[i]>0 && arr[i]<=n && arr[arr[i]-1] != arr[i]) {
                swap(arr[i], arr[arr[i]-1]);
            }
        }
        
        for(int i=0;i<n;i++) {
            if(arr[i]!=i+1) {
                return i+1;
            }
        }
        
        return n+1;
        
        
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
