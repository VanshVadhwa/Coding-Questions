//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> frequentMap;

        for (int i = 0; i < n; ++i) {
            frequentMap[arr[i]]++;
        }

        vector<pair<string, int>> frequentVector;

        for (const auto &entry : frequentMap) {
            frequentVector.push_back(entry);
        }

        sort(frequentVector.begin(), frequentVector.end(), [](const auto &a, const auto &b) 
        {
            return a.second > b.second;
        });

        if (frequentVector.size() < 2) {
            return "";
        }

        return frequentVector[1].first;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends