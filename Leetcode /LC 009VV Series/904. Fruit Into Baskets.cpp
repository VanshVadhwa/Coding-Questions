class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int left = 0, ans = 0;
        unordered_map<int,int> map;

        for(int right=0;right<n;right++) {
            map[fruits[right]]++;
            while(map.size()>2) {
                map[fruits[left]]--;
                if(map[fruits[left]]==0) map.erase(fruits[left]);
                left += 1;
            }
            ans = max(ans,right-left+1);
        }

        return ans;
    }
};
