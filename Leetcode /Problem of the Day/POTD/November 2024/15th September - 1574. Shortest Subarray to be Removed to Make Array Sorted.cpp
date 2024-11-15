class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();

        // end index of prefix array i suppose
        int left = 0;
        while(left < n-1 && arr[left]<=arr[left+1]) {
            left++;
        }
        if(left==n-1) return 0;

        // first index of suffix array i suppose, hehe
        int right = n-1;
        while(right>0 && arr[right]>=arr[right-1]) {
            right--;
        }
        if(right==0) return 0;

        //sliding window 
        int ans = min(n-left-1,right);
        int i = 0;
        int j = right;
        while(i<=left && j<n) {
            if(arr[j]>=arr[i]) {
                ans = min(ans,j-i-1);
                i++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};
