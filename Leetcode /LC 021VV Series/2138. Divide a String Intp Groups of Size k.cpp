class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string temp = "";

        for(char c : s) {
            temp.push_back(c);
            if(temp.size() == k) {
                ans.push_back(temp);
                temp.clear();
            }
        }

        if(!temp.empty()) {
            while(temp.size() != k) {
                temp.push_back(fill);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
