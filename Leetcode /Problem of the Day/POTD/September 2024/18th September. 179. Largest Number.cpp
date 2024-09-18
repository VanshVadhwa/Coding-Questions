class Solution {
private:
    void swapStrings(string& s1, string& s2) {
        string temp1 = s1+s2;
        string temp2 = s2+s1;
        if(temp2>temp1) {
            swap(s1,s2);
        }
    }
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        
        for(int i=0;i<n;i++) {
            ans.push_back(to_string(nums[i]));
        }

        string output = "";

        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                swapStrings(ans[i],ans[j]);
            }
        }
        
        for(string str : ans) {
            output += str;
        }

        if(output[0]=='0') return "0";
        return output;
    }
};
