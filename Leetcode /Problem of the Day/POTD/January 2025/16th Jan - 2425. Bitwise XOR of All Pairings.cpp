class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        int temp1 = 0, temp2 = 0;
        
        if(n2%2 != 0)
        for(int i : nums1) temp1 ^= i;
        if(n1%2 != 0)
        for(int i : nums2) temp2 ^= i;

        return temp1 ^ temp2;
        
    }
};
