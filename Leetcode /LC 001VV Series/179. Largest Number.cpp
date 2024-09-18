class Solution {
private:
    static bool compare(string& s1, string& s2) {
        return s1+s2 > s2+s1;
    }
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans(n,"");

        for(int i=0;i<n;i++) {
            ans[i] = to_string(nums[i]);
        }

        sort(ans.begin(),ans.end(), compare); //custom comparator

        string output = "";
        for(string str : ans) {
            output += str;
        }

        if(output[0]=='0') return "0";

        return output;
    }
};
