class Solution {
public:
    int splitArray(vector<int>& arr, int K) {
        int N = arr.size();
        int start = 0;
        long long end = 0;
        for(int i=0;i<N;i++) {
            start = max(arr[i], start);
            end += arr[i];
        }
        int ans = end;
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
            int count = 1, sum = 0;
            for(int i=0;i<N;i++) {
                sum += arr[i];
                if(sum > mid) {
                    count+=1;
                    sum = arr[i];
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
