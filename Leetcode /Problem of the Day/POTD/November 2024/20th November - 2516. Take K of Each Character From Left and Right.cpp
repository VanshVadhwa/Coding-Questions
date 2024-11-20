class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.length();
        int aCount = 0;
        int bCount = 0;
        int cCount = 0;

        for(char c : s) {
            if(c=='a') aCount++;
            else if(c=='b') bCount++;
            else cCount++;
        }

        if(aCount < k || bCount<k || cCount<k) return -1;

        int left = 0;
        int currA = 0, currB = 0, currC = 0;
        int ans = INT_MAX;
        // sliding window
        for(int right=0;right<n;right++) {
            if(s[right]=='a') currA++;
            if(s[right]=='b') currB++;
            if(s[right]=='c') currC++;

            while(currA > aCount-k || currB > bCount-k || currC > cCount-k) {
                if(s[left]=='a') currA--;
                if(s[left]=='b') currB--;
                if(s[left]=='c') currC--;
                left++;
            }

            ans = min(ans,n-(right-left+1));
        }

        return ans;
    }
};
