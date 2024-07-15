class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int end = 0, ans = 0;
        long long maximum = 0;
        for(int i=0;i<n;i++) {
            end = max(end, piles[i]);
            maximum += piles[i];
        }
        int start = maximum/h;
        if(start == 0) {
            start = 1;
        }

        while(start <= end)
        {
            int mid = start + (end-start)/2;

            int count = 0;

            for(int i=0;i<n;i++) {
                count += piles[i]/mid;
                if(piles[i]%mid != 0 || piles[i]<mid) {
                    count++;
                }
            }

            if(count > h) {
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
