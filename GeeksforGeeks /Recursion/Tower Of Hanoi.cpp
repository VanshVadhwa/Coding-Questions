//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // You need to complete this function
    void tohCal(int n, int sour, int help, int dest) {
        //base case
        if(n==1) {
            cout << "move disk " << n << " from rod " << sour 
            << " to rod " << dest << endl; 
            return;
        }
        tohCal(n-1,sour,dest,help);
        cout << "move disk " << n << " from rod " << sour 
        << " to rod " << dest << endl;
        tohCal(n-1,help,sour,dest);
    }

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        tohCal(n,from,aux,to);
        long long ans = 1;
        for(int i=1;i<=n;i++) {
            ans = ans*2;
        }
        return ans-1;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}

// } Driver Code Ends
