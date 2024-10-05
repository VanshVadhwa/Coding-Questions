class Solution {
private:
    bool allZero(vector<int>& count)
    {
        for(int i : count)
        {
            if(i!=0) {
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1>n2) return false;

        vector<int> count(26,0);
        for(char c : s1)
        {
            count[c-'a']++;
        }
        
        for(int i=0;i<n2;i++)
        {
            count[s2[i]-'a']--;

            if(i>=n1) {
                count[s2[i-n1]-'a']++;
            }

            if(allZero(count)) {
                return true;
            }
        }
        return false;
    }
};
