class Solution {
private:
    void rightShift(vector<int>& nums, int index)
    {
        int target = nums[index];
        for(int i=index;i>0;i--) {
            nums[i] = nums[i-1];
        }
        nums[0] = target;
    } 
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> nums(m);
        iota(nums.begin(),nums.end(),1);

        for(int i=0;i<queries.size();i++) {
            int pos = find(nums.begin(), nums.end(), queries[i]) - nums.begin(); 
            queries[i] = pos;
            rightShift(nums,pos);
        }

        return queries;
    }
};
