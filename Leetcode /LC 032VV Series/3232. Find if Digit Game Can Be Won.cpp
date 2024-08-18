class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int single = 0, doub = 0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]<10)
            single += nums[i];
            if(nums[i]>=10)
            doub += nums[i];
        }

        return (single > doub || single < doub);
    }
};
