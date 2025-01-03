//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

bool comp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
} 

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int n = start.size();
        vector<pair<int,int>> timer;
        for(int i=0;i<n;i++) {
            timer.push_back({start[i],end[i]});
        }
        
        sort(timer.begin(),timer.end(), comp);
        int ans = 1;
        int endTime = timer[0].second;
        
        for(int i=1;i<n;i++) {
            if(timer[i].first > endTime) {
                endTime = timer[i].second;
                ans++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> start;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            start.push_back(num);
        }

        vector<int> end;
        getline(cin, input);
        stringstream s22(input);
        while (s22 >> num) {
            end.push_back(num);
        }

        Solution ob;
        int ans = ob.maxMeetings(start, end);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
