class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int ans = 0, left = 0, sum = 0;

        for(int right=0;right<n;right++) {
            sum += arr[right];
            if(right-left+1==k) {
                if(sum/k >= threshold) ans += 1;
                sum -= arr[left++];
            }
        }

        return ans;
    }
};
