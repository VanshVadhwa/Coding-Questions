class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.length();
        int index = 0;
        string ans = "";

        for(int i=0;i<n;i++)
        {
            if(address[i]=='.')
            ans+="[.]";
            else
            ans+=address[i];
        }

        return ans;
    }
};
