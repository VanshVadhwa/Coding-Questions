class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();

        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++) {
            vp.push_back({nums[i],i});
        }

        sort(vp.begin(),vp.end());

        map<int,vector<int>> map;
        for(int i=n-1;i>=n-k;i--) {
            map[vp[i].second].push_back(vp[i].first); 
        }

        vector<int> ans(k,0);
        int index = 0;

        for(auto& pair : map) {
            int size = pair.second.size();
            for(int i=0;i<size;i++) {
                if(index<k) ans[index++] = pair.second[i];
                else return ans;
            }
        }
        
        return ans;
    }
};
