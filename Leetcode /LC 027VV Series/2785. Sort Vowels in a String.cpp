class Solution {
public:
    string sortVowels(string s) {
        int n = s.length();
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') 
            {
                lower[s[i]-'a']++;
                s[i] = '#';
            }
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')      {
                upper[s[i]-'A']++;
                s[i] = '#';
            }
        }

        //Answer string
        string ans = "";

        //uppercase
        for(int i=0;i<26;i++)
        {
            char c = 'A'+i;
            while(upper[i]) {
                ans += c;
                upper[i]--;
            }
        }

        //lowercase
        for(int i=0;i<26;i++)
        {
            char c = 'a'+i;
            while(lower[i]) {
                ans += c;
                lower[i]--;
            }
        }

        // final answer
        int first = 0, second = 0;
        while(second < ans.size())
        {
            if(s[first]=='#') 
            {
                s[first] = ans[second];
                second++;
            }
            first++;
        }

        return s;
    }
};
