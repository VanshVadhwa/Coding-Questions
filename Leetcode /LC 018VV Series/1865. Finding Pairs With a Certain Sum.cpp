class FindSumPairs {
private:
    vector<int> nums1;
    vector<int> nums2;
    unordered_map<int,int> map;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums2 = nums2;
        this->nums1 = nums1;
        for(int i : nums2) map[i]++;
    }
    
    void add(int index, int val) {
        int oldVal = nums2[index];
        map[oldVal] -= 1;
        if(map[oldVal]==0) map.erase(oldVal);
        nums2[index] += val;
        map[nums2[index]] += 1;
    }
    
    int count(int tot) {
        int ans = 0;
        for(int i : nums1) if(map.count(tot-i)) ans += map[tot-i];
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
