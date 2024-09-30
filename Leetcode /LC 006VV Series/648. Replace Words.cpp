class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> set(dictionary.begin(), dictionary.end());
        string word, ans;
        stringstream words(sentence);

        while(words >> word)
        {
            string str = "";
            bool flag = false;
            for(char c : word) {
                str += c;
                if(set.count(str)) {
                    flag = true;
                    break;
                }
            }
            ans += (flag ? str : word) + " ";
        }
        
        ans.pop_back();
        return ans;
    }
};
