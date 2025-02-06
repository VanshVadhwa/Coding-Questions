class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        unordered_map<int,int> map;

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int mul = nums[i]*nums[j];
                ans += map[mul]*8;
                map[mul]++;
            }
        }

        return ans;
    }
};
