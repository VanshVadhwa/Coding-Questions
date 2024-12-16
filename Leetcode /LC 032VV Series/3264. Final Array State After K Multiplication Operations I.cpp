class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();

        vector<pair<int,int>> minHeap;
        for(int i=0;i<n;i++) {
            minHeap.push_back({nums[i],i});
        }

        // in build function - never knew about it :)
        make_heap(minHeap.begin(),minHeap.end(),greater<>());

        while(k--) {
            pop_heap(minHeap.begin(),minHeap.end(),greater<>());
            auto [value, i] = minHeap.back();
            minHeap.pop_back();
            
            nums[i] *= multiplier;
            minHeap.push_back({nums[i],i});
            push_heap(minHeap.begin(),minHeap.end(),greater<>());
        }

        return nums;
    }
};
