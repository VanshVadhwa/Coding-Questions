class Solution {
private:
    void solve(vector<string>& words, vector<int>& groups, int index, int bit, vector<string>& temp, vector<string>& ans)
    {
        if(index==words.size()) {
            if(temp.size() > ans.size()) ans = temp;
            return; 
        }

        // include 
        if(groups[index] != bit) {
            bit = groups[index];
            temp.push_back(words[index]);
            solve(words,groups,index+1,bit,temp,ans);
            if(temp.size() > 0) temp.pop_back();
        }

        else {
            solve(words,groups,index+1,bit,temp,ans);
            if(temp.size() > 0) temp.pop_back();
        }
    }
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans,temp;
        ans.push_back(words[0]);
        temp.push_back(words[0]);
        map<pair<int, int>, vector<string>> memo;
        solve(words,groups,1,groups[0],temp,ans,memo);
        return ans;
    }
};
