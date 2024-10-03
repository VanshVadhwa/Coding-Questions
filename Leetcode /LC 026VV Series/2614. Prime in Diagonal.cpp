class Solution {
private:
    bool isPrime(int n)
    {
        if(n<2) return false;
        if(n==2 || n==3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5;i*i<=n;i+=6) {
            if(n%i==0 || (n%(i+2)==0)) return false;
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(isPrime(nums[i][i])) {
                ans = max(ans,nums[i][i]);
            }
            if(isPrime(nums[i][n-i-1])) {
                ans = max(ans,nums[i][n-i-1]);
            }
        }
        return ans;
    }
};
