//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        long long total = 0;
        int end = 0, ans = 0;
        for(int i=0;i<N;i++) {
            total += piles[i];
            end = max(end, piles[i]);
        }
        int start = total/H;
        
        if(start == 0) start = 1; //edge test case to handle divisibilty by 0
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
            int count = 0;
            
            for(int i=0;i<N;i++) {
                count += piles[i]/mid;
                if(piles[i]%mid!=0) {
                    count++;
                }
            }
            
            if(count > H) {
                start = mid+1;
            }
            else {
                ans = mid;
                end = mid-1;
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
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
