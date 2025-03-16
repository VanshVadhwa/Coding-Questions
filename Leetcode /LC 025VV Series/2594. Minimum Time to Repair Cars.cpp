class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        int n = ranks.size();
        long long start = 1, end = 1e14, ans = 0;

        while(start <= end) {
            long long mid = (start) + (end-start)/2;
            long long count = 0;
            
            for(int rank : ranks) {
                count += sqrt(mid/rank);
                if(count >= cars) break;
            }

            if(count >= cars) {
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
