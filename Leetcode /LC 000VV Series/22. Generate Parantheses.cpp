class Solution {
private:
    void parantheses(int n, int left, int right, vector<string>& ans, string& temp) {
        //base case
        if(left+right==2*n) {
            ans.push_back(temp);
            return;
        }

        //left add
        if(left < n) {
            temp.push_back('(');
            parantheses(n,left+1,right,ans,temp);
            temp.pop_back();
        }

        //right add
        if(right < left) {
            temp.push_back(')');
            parantheses(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string> ans;
        parantheses(n,0,0,ans,temp);
        return ans;
    }
};
