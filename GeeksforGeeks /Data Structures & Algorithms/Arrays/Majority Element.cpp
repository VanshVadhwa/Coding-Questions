//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int candidate = 0, count = 0;
        
        for(int i=0;i<size;i++)
        {
            if(count==0)
            {
                candidate = a[i];
                count++;
            }
            else {
                if(candidate==a[i]) count++;
                else count--;
            }
        }
        
        int verify = 0;
        
        //verification
        for(int i=0;i<size;i++)
        {
            if(candidate==a[i])
            verify++;
        }
        
        if(verify > size/2) return candidate;
        return -1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends

// Link: https://www.geeksforgeeks.org/problems/majority-element-1587115620/1
