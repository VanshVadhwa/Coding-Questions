#include<iostream>
using namespace std;

int count(int arr[], int n, int k) {
	    // code here
	    int start = 0;
	    int end = n-1;
	    
	    int first = -1, last = -1;
	    
	    while(start <= end) 
	    {
	        int mid = start + (end-start)/2;
	        
	        if(arr[mid] == k) {
	            first = mid;
	            end = mid - 1;
	        }
	        
	        else if(arr[mid] > k) {
	            end = mid-1;
	        }
	        else {
	            start = mid+1;
	        }
	    }
	    
	    start = 0;
	    end = n-1;
	    
	    while(start <= end) 
	    {
	        int mid = start + (end-start)/2;
	        
	        if(arr[mid] == k) {
	            last = mid;
	            start = mid+1;
	        }
	        
	        else if(arr[mid] > k) {
	            end = mid-1;
	        }
	        else {
	            start = mid+1;
	        }
	    }
	    
	    if(first == -1) {
	        return 0;
	    }
	    
	    return last-first+1;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int ans = count(arr, n, target);
    cout << ans << endl;
    return 0;
}