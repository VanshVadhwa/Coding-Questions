class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;

        int jumps = 0;
        int current = 0;
        int further = 0;

        for(int i=0;i<n;i++) {
            further = max(further, i+nums[i]);
            if(i==current) {
                jumps += 1;
                current = further;
                if(current >= n-1) return jumps;
            }
        }

        return jumps;
    }
};
