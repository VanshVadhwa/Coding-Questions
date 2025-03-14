class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size(), ans = -1;
        int start = 1, end = 1e7;

        while(start <= end) {
            int mid = start + (end-start)/2;
            double time = 0.0;

            for(int i=0;i<n-1;i++) {
                time += (dist[i]+mid-1)/mid;
            }
            time += (double)dist[n-1]/mid;


            if(time <= hour) {
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
