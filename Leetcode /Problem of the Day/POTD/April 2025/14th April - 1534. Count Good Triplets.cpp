class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size(), ans = 0;
        
        for(int i=0;i<n-2;i++) {
            for(int j=i+1;j<n-1;j++) {
                if(abs(arr[i]-arr[j])<=a) {
                    for(int k=j+1;k<n;k++) {
                        if(abs(arr[i]-arr[k])<=c && abs(arr[j]-arr[k])<=b) {
                            ans += 1;
                        }
                    }
                }
            }
        }

        return ans;
    }
};
