class Solution {
private:
    bool isPrefix(string temp, string s) {
        int n1 = temp.length(), n2 = s.length();
        int index1 = 0, index2 = 0;
        while(index1 < n1 && index2 <n2) {
            if(temp[index1]!=s[index2]) {
                return false;
            }
            index1++;
            index2++;
        }
        if(index2==n2) return true;
        return false;
    }
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.length();
        string temp = "";
        int wordNumber = 1;

        for(char c : sentence) {
            if(c>32) {
                temp += c;
            }
            else {
                if(isPrefix(temp,searchWord)) {
                    return wordNumber;
                }
                temp.clear();
                wordNumber += 1;
            }
        }

        if(isPrefix(temp,searchWord)) return wordNumber;
        return -1;
    }
};
