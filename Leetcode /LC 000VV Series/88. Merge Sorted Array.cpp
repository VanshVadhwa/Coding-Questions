class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = m-1;
        int index2 = n-1;
        int i = m+n-1;
        
        while(index1 >= 0 && index2 >= 0) {
            if(nums2[index2]>nums1[index1]) {
                nums1[i--] = nums2[index2--];
            }
            else {
                nums1[i--] = nums1[index1--];
            }
        }
        while(index2>=0) {
            nums1[i--] = nums2[index2--];
        }
    }
};
