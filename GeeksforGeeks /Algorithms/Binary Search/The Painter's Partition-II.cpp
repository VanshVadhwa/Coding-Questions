//Book Allocation and Ship Packages have almost same code, and they are uploaded on algorithms folder of geeksforgeeks and LC010VV Series folder of Leetcode

//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        int start = 0;
        long long end = 0;
        for(int i=0;i<n;i++) {
            start = max(start, arr[i]);
            end += arr[i];
        }
        
        
        long long ans = 0;
        
        while(start <= end)
        {
            long long mid = start + (end-start)/2;
            
            long long length = 0, boards = 1;
            
            for(int i=0;i<n;i++) {
                length += arr[i];
                if(length > mid) {
                    boards++;
                    length = arr[i];
                }
            }
            
            if(boards <= k) {
                ans = mid;
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
