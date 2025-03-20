class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length(), left = 0;
        unordered_map<string,int> map;
        unordered_set<string> set;

        for(int right=0;right<n;right++) {
            if(right-left >= 9) {
                string temp = s.substr(left,10);
                map[temp]++;
                if(map[temp] >= 2) set.insert(temp);
                left += 1;
            }
        }

        vector<string> ans;
        for(string str : set) {
            ans.push_back(str);
        }

        return ans;
    }
};
