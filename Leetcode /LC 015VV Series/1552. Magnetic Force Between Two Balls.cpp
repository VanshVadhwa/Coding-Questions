class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int start = 1, ans = 0;
        long long end = position[n-1]-position[0];

        while(start <= end)
        {
            int mid = start + (end-start)/2;

            int stand = position[0], count = 1;

            for(int i=0;i<n;i++) {
                if(stand+mid <= position[i]) {
                    count+=1;
                    stand = position[i]; 
                }
            }
            if(count < m) {
                end = mid-1;
            }
            else {
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
    }
};
