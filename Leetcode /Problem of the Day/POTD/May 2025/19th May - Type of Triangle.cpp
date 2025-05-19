class Solution {
public:
    string triangleType(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1] <= nums[2]) return "none";
        if(nums[0]==nums[1]) count = 2; 
        if(count==2 && nums[1]==nums[2]) return "equilateral";
        if(count==0 && (nums[1]==nums[2] || nums[0]==nums[2])) return "isosceles";
        if(count==2 && nums[1] != nums[2]) return "isosceles";
        return "scalene";
    }
};      
