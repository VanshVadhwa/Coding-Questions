class Solution {
public:
    string removeOccurrences(string s, string part) {
        int k = part.size();
        string ans = "";
        for(char c : s){
            ans += c;
            if(ans.contains(part)){
                for(int i=0;i<k;i++){
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
};
