class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.length();
        int t = typed.length();
        
        int i = 0,  j= 0;
        bool flag = false;

        while(j < t)
        {
            if(i < n && name[i] == typed[j]){
                i++;
                j++;
            }
            else if(j > 0 && typed[j] == typed[j-1]){
                j++;
            }
            else {
                return false;
            }
        }
        return i == n;
    }
};
