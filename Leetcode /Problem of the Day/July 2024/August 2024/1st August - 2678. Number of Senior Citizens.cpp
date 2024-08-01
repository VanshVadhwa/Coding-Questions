class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 1;
        int count = 0;
        for(int i=0;i<details.size();i++)
        {
            ans = (details[i][11]-'0');
            ans = ans*10 + (details[i][12]-'0');
            if(ans>60) count++;
            ans=1;
        } 
        return count;
    }
};