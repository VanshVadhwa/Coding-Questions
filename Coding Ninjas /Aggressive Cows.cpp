int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size();

    sort(stalls.begin(), stalls.end());

    int start = 1;
    int end = stalls[n-1]-stalls[0];
    int ans = 0;

    while(start <= end)
    {
        int mid = start+(end-start)/2;

        int position = stalls[0], count = 1;

        for(int i=0;i<n;i++) {
            if(position+mid <= stalls[i]) {
                count++;
                position = stalls[i];
            }
        }

        if(count >= k) {
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}
