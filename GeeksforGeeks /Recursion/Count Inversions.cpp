//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    long long merge(vector<long long>& arr, int start, int mid, int end)
    {
        vector<int> temp(end-start+1);
        int left = start;
        int right = mid+1;
        int index = 0;
        long long ans = 0;
        while(left <= mid && right <= end)
        {
            if(arr[left]<=arr[right])
            {
                temp[index] = arr[left];
                index++;
                left++; 
            }
            else {
                ans += (mid-left+1);
                temp[index] = arr[right];
                index++;
                right++;
            }
        }
        while(left <= mid) {
            temp[index] = arr[left];
            index++;
            left++;
        }
        while(right <= end) {
            temp[index] = arr[right];
            index++;
            right++;
        }
        //copying the elements to their correct indexes
        index = 0;
        for(int i=start;i<=end;i++) {
            arr[i] = temp[index];
            index++;
        }
        return ans;
    }

    long long mergeSort(vector<long long>& arr, int start, int end)
    {
        if(start>=end) {
            return 0;
        }
        long long ans = 0;
        int mid = start + (end-start)/2;
        ans += mergeSort(arr,start,mid);
        ans += mergeSort(arr,mid+1,end);
        ans += merge(arr,start,mid,end);
        return ans;
    }
    
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(vector<long long> &arr) {
        // Your Code Here
        return mergeSort(arr,0,arr.size()-1);
    }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<long long> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
    }

    return 0;
}

// } Driver Code Ends
