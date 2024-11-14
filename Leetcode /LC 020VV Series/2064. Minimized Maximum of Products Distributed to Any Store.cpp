class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();
        int start = 1;
        int end = *max_element(quantities.begin(), quantities.end());
        int ans = end;

        while(start <= end)
        {
            int mid = start + (end-start)/2;

            int distribute = 0;
            for(int num : quantities) {
                distribute += num/mid;
                if(num%mid!=0) distribute += 1;
            }

            if(distribute<=n) {
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
