class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> pos, neg, ans;

        for(int i=0;i<n;i++)
        {
            if(nums[i]<0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }

        for(int i=0;i<n/2;i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;


        // while(even < n && odd < n)
        // {
        //     if(nums[even]<0) {
        //         even++;
        //     }
        //     else 
        //     {
        //         if(nums[odd]>0) {
        //             odd++;
        //         }
        //         else 
        //         {
        //             swap(nums[even], nums[odd]);
        //             even++;
        //             odd++;
        //         }
        //     }
        // }
        // return nums;
    }
};
