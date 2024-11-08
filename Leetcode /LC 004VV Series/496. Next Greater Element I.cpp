class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        //brute force(done)
        for(int i=0;i<n1;i++) {
            int element = nums1[i];
            bool flag = false;
            //find index of that element
            for(int j=0;j<n2;j++) {
                if(nums2[j]==element && flag == false) {
                    flag = true;
                }
                if(flag) {
                    if(nums2[j]>element) {
                        nums1[i]=nums2[j];
                        break;
                    }
                }
            }
            if(nums1[i]==element) {
                nums1[i]=-1;
            }
        }

        return nums1;
    }
};
