//{ Driver Code Starts
// Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int rotationCount(long long R, long long D)
    {
        // code here
        int ans = 0;
        
        while(R) {
            int num = abs(R%10-D%10);
            ans += min(10-num,num);
            R/=10, D/=10;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long R, D;
        cin>>R>>D;
        
        Solution ob;
        cout<<ob.rotationCount(R, D)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
