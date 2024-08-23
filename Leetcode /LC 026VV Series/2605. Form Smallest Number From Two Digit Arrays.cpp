class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int min1 = 10;
        int min2 = 10;

        vector<bool> mark(10,false);

        for(int i : nums1) {
            mark[i] = true;
        }

        int minimum = 10;

        for(int i : nums2) {
            if(mark[i]==true) {
                minimum = min(i, minimum);
            }
        }

        if(minimum != 10) {
            return minimum;
        }

        for(int i=0;i<nums1.size();i++) {
            min1 = min(nums1[i], min1);
        }

        for(int i=0;i<nums2.size();i++) {
            min2 = min(nums2[i], min2);
        }

        if(min1 < min2) {
            return min1*10 + min2;
        }
        else if(min1 > min2) {
            return min2*10 + min1;
        }
        
        return -1;
    }
};
