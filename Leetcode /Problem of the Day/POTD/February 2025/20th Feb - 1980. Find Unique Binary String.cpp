class Solution {
private:
    int binToDec(string s) {
        int ans = 0;
        long long mul = 1;

        for(int i=s.length()-1;i>=0;i--) {
            ans = (s[i]-'0')*mul + ans;
            mul *= 2;
        }

        return ans;
    }
    string decToBin(int n) {
        string ans = "";
        while(n != 0) {
            ans += ((n%2)+'0');
            n /= 2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<int,bool> map;

        for(int i=0;i<nums.size();i++) {
            int num = binToDec(nums[i]);
            map[num] = true;
        }

        int num = 0;
        int start = pow(2,nums.size()-1);
        int end = pow(2,nums.size());
        for(int i=start;i<end;i++) {
            if(!map[i]) {
                num = i;
                break;
            }
        }

        string ans = decToBin(num);
        while(ans.length() != nums.size()) {
            ans += '0';
        }
        return ans;
    }
};
