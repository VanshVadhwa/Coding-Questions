class Solution {
private:
    void reverseIn(vector<int>& nums, int start, int end) {
        while(start < end) {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverseIn(nums,0,n-1);
        reverseIn(nums,0,k-1);
        reverseIn(nums,k,n-1);
    }
};
