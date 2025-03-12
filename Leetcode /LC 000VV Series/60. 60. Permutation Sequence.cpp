class Solution {
private:
    void next_permutation(string& s) {
        int n = s.length();
        int pivot = -1;

        for(int i=n-2;i>=0;i--) {
            if(s[i] < s[i+1]) {
                pivot = i;
                break;
            }
        }

        if(pivot==-1) {
            reverse(s.begin(),s.end());
            return;
        }

        for(int i=n-1;i>pivot;i--) {
            if(s[i] > s[pivot]) {
                swap(s[i],s[pivot]);
                break;
            }
        }

        reverse(s.begin()+pivot+1,s.end());
    }

    void rec_per(string& s, int k, string& ans) {
        if(k==1) {
            ans = s;
            return;
        }

        if(ans.empty()) {
            next_permutation(s);
            rec_per(s,k-1,ans);
        }
    }
public:
    string getPermutation(int n, int k) {
        string s = "";
        for(int i=1;i<=n;i++) {
            s += (i+'0');
        }
        string ans = "";
        rec_per(s,k,ans);      
        return ans; 
    }
};
