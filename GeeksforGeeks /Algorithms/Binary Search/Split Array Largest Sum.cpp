//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int start = 0, ans = 0;
        long long end = 0;
        for(int i=0;i<N;i++) {
            start = max(arr[i], start);
            end += arr[i];
        }
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
            int count = 1, sum = 0;
            for(int i=0;i<N;i++) {
                sum += arr[i];
                if(sum > mid) {
                    count+=1;
                    sum = 0;
                    i-=1;
                }
            }
            if(count <= K) {
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

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
