class Solution {
private:
    void solve(string& s, int index, int dotCount, string temp, vector<string>& ans) {
        if(index==s.length() && dotCount==4) {
            ans.push_back(temp);
            return;
        }

        if(dotCount > 4) return;

        for(int len=1;len<=3;len++) {
            if(index+len >s.length()) break;

            string part = s.substr(index,len);
            int num = stoi(part);

            if((len>1 && part[0]=='0') || num > 255) continue;

            solve(s,index+len,dotCount+1,temp+(dotCount ? "." : "")+part,ans);
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        solve(s,0,0,"",ans);
        return ans;
    }
};
