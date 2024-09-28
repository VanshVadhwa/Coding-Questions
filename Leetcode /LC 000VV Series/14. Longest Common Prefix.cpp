class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string minStr = strs[0];
        string maxStr = strs[0];

        for(int i=0;i<strs.size();i++) 
        {
            if(strs[i] < minStr) {
                minStr = strs[i];
            }
            if(strs[i] > maxStr) {
                maxStr = strs[i];
            }
        }

        string ans = "";
        for(int i=0;i<minStr.length();i++)
        {
            if(minStr[i]!=maxStr[i]) {
                break;
            }
            ans += minStr[i];
        }
        return ans;
    }
};
