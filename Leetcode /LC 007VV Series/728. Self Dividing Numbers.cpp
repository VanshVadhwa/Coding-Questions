class Solution {
private:
    bool isSelfDividing(int n)
    {
        if(n<10) return true;
        int temp = n;
        while(n)
        {
            int ans = n%10;
            if(ans==0 || temp%ans!=0) return false;
            n /= 10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++) {
            if(isSelfDividing(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
