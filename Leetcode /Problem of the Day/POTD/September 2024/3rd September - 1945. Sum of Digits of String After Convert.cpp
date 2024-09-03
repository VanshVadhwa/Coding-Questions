class Solution {
private:
    int convert(char c) {
        return c - 'a' + 1;
    }
public:
    int getLucky(string s, int k) {
        int n = s.length();
        string ans = "";

        for(int i=0;i<n;i++) {
            int temp = convert(s[i]);
            ans += to_string(temp);
        }

        while(k--)
        {
            int num = 0;
            for(int i=0;i<ans.size();i++) {
                int tempNum = ans[i]-'0';
                num += tempNum;
            }
            if(k==0) {
                return num;
            }
            ans = to_string(num);
        }

        return 1;
    }
};
