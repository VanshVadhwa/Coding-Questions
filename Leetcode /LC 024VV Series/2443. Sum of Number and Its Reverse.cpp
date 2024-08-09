class Solution {
    private:
    int reverseint(int num)
    {
        int ans=0, rem=0;
        while(num)
        {
            rem = num%10;
            ans = ans*10 + rem;
            num /= 10;
        }
        return ans;
    }

public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        
        for(int i=1;i<=num;i++)
        {
            int ans = reverseint(i);
            if(ans+i==num) {
                return true;
            } 

        }
        return false;
    }
};
