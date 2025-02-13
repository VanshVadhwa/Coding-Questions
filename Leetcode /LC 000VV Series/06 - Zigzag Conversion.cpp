class Solution {
public:
    string convert(string s, int numRows) {
       int n = s.length();
       if(numRows <= 1) return s;

       vector<string> arr(numRows, "");
       int currentLine = 0;
       bool newCol = true;

       for(int i=0;i<n;i++) {
            if(currentLine == 0 || currentLine == numRows-1) {
                newCol = !newCol;
            }

            arr[currentLine].push_back(s[i]);

            if(!newCol) {
                currentLine++;
            }
            else {
                currentLine--;
            }
        }

        string ans = "";
        for(string s : arr) {
            ans += s;
        }

        return ans;

    }
};
