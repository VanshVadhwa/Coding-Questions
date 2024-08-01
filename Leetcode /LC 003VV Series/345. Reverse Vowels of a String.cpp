class Solution {
public:
    string reverseVowels(string s) {
        vector<bool> vowels(256,false);

        for(char c : s)
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
                vowels[c]=true;
            }
        }

        int start = 0, end = s.length()-1;

        while(start<end)
        {
            if(vowels[s[start]]!=true) {
                start++;
            }
            else{
                if(vowels[s[end]]==true) {
                    swap(s[start], s[end]);
                    start++;
                    end--;
                } 
                else {
                    end--;
                }
            }
        }
        return s;
    }
};
