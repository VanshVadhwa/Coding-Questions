bool comp(string a, string b) {
    return a+b > b+a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> numsString(n,"");

        for(int i=0;i<n;i++) {
            numsString[i] = to_string(nums[i]);
        }

        sort(numsString.begin(),numsString.end(), comp);

        string ans = "";

        for(string s : numsString) {
            ans += s;
        }

        if(ans[0]=='0') return "0";

        return ans;
    }
};
