class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.length();
        int indexSwap = 0;

        for(int i=0;i<n-1;i++)
        {
            bool flag = false;
            int index = i;
            for(int j=n-1;j>i;j--) {
                if(s[j]>s[index]) {
                    index = j;
                    flag = true;
                }
            }
            if(flag) {
                swap(s[i],s[index]);
                break;
            }
        }

        int ans = stoi(s);
        return ans;
    }
};
