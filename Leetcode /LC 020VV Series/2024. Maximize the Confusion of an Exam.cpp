class Solution {
private:
    int targetChar(string s, int k, char target) {
        int n = s.length(), left = 0, ans = 0;

        for(int right=0;right<n;right++) {
            if(s[right] != target) k -= 1;
            while(k < 0) {
                if(s[left] != target) k += 1;
                left += 1;
            } 
            ans = max(ans,right-left+1);
        }

        return ans;
    }
public:
    int maxConsecutiveAnswers(string s, int k) {
        return max(targetChar(s,k,'T'),targetChar(s,k,'F'));
    }
};
