class Solution {
private:
    bool isDigit(char c) {
        return (c >= '0' && c <= '9');  
    }
public:
    int maximumValue(vector<string>& strs) {
        int n = strs.size();
        int ans = 0;

        for(int i=0;i<n;i++)
        {
            bool flag = false;
            int len = strs[i].length();
            if(isDigit(strs[i][0])) {
                for(int j=0;j<len;j++)
                {
                    if(!isDigit(strs[i][j])) {
                        flag = true;
                        break;
                    }
                }
                if(!flag) {
                    len = stoi(strs[i]);
                }
            }
            ans = max(ans,len);
        }
        return ans;
    }
};
