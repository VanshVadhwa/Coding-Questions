class Solution {
private:
    void updateBits(vector<int>& bits, int num, int op) {
        for(int i=0;i<30;i++) {
            if((num>>i) & 1) {
                bits[i] += op;
            }
        }
    }
    int binToDec(vector<int>& bits) {
        int ans = 0;
        for(int i=0;i<30;i++) {
            if(bits[i]>0) {
                ans += pow(2,i);
            }
        }
        return ans;
    }
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        int start = 0;
        int end = 0;
        vector<int> bits(30,0);

        while(end < n) {
            updateBits(bits,nums[end],1);
            while(start <= end && binToDec(bits)>=k) {
                ans = min(ans, end-start+1);
                updateBits(bits,nums[start],-1);
                start++;
            }
            end++;
        }

        return ans==INT_MAX ? -1 : ans;
    }
};
