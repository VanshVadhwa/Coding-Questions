class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0, count = 0;
        for(char c : s)
        {
            if(c=='b')
            count+=1;
            else if(count) {
                ans+=1;
                count-=1;
            }
        }
        return ans;
    }
};
