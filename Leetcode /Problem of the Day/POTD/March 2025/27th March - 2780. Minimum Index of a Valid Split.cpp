class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        int dom = 0, freq = 0;

        for(int i : nums) {
            map[i]++;
            if(map[i] > freq) {
                dom = i;
                freq = map[i];
            }
        }

        int domCount = 0, otherCount = 0, index = -1;
        for(int i=0;i<n-1;i++) {
            if(nums[i] != dom) {
                otherCount += 1;
            }
            else {
                domCount += 1;
            }
            if(domCount > otherCount) {
                index = i+1;
                break;
            }
        }

        if(index==-1) return -1;

        domCount = 0, otherCount = 0;
        for(int i=index;i<n;i++) {
            if(nums[i]==dom) domCount += 1;
            else otherCount += 1;
        }

        return domCount > otherCount ? index-1 : -1;
    }
};
