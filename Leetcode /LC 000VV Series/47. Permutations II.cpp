class Solution {
private:
    void per(vector<int>& nums, int index, vector<vector<int>>& ans)
    {
        if(index==nums.size()) {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> seen;
        for(int i=index;i<nums.size();i++) {
            if(seen.find(nums[i]) != seen.end()) continue;
            seen.insert(nums[i]);

            swap(nums[i],nums[index]);
            per(nums,index+1,ans);
            swap(nums[i],nums[index]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        per(nums,0,ans);
        return ans;
    }
};
