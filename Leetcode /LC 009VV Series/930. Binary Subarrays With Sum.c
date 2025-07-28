int atMost(int* nums, int n, int k) {
    int left = 0, ans = 0;
    for(int right=0;right<n;right++) {
        k -= *(nums + right);
        while(left <= right && k < 0) {
            k += *(nums + left++);
        }
        ans += (right-left+1);
    }
    return ans;
}
int numSubarraysWithSum(int* nums, int numsSize, int goal) {
    return atMost(nums,numsSize,goal) - atMost(nums,numsSize,goal-1);
}
