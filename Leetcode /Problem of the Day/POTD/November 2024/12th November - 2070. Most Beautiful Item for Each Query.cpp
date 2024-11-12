class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        // based on the sort of price
        sort(items.begin(),items.end());

        // updating array for binary search
        for(int i=1;i<items.size();i++) {
            items[i][1] = max(items[i][1], items[i-1][1]);
        }

        int n = queries.size();
        vector<int> res(n,0);
        for(int i=0;i<n;i++) {
            int target = queries[i];

            //binary search
            int start = 0, end = items.size()-1;
            int ans = 0;
            while(start <= end)
            {
                int mid = start + (end-start)/2;
                if(items[mid][0]<=target) {
                    ans =items[mid][1];
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
            }
            res[i] = ans;
        }

        return res;
    }
};
