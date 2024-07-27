class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> map;

        for(int num : nums) map[num]++;

        for(int i : nums) if(map[i]%2!=0) return false;

        return true;
    }
};
