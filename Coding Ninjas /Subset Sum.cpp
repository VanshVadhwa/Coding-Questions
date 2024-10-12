void subsetSum(vector<int>& nums, int index, int n, vector<int>& ans, int sum) {
    //base case
    if(index==n) {
        ans.push_back(sum);
        return;
    }

    //non include
    subsetSum(nums,index+1,n,ans,sum);

    //include
    sum += nums[index];
    subsetSum(nums,index+1,n,ans,sum);
}

vector<int> subsetSum(vector<int> &nums){
	// Write your code here.
	int n = nums.size();	
	vector<int> ans;
	int sum = 0;
	subsetSum(nums,0,n,ans,sum);
	sort(ans.begin(),ans.end());
	return ans;
}
