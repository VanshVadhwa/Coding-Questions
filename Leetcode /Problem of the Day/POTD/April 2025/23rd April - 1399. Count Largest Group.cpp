class Solution {
private:
    int sumOfDigits(int n) {
        int ans = 0;
        while(n > 0) {
            ans += n%10;
            n /= 10;
        }
        return ans;
    }
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> map;
        int maxLength = 0;
        for(int i=n;i>=1;i--) {
            int num = sumOfDigits(i);
            map[num]++;
            maxLength = max(maxLength,map[num]);
        }

        int ans = 0;
        for(auto& pair : map) {
            if(pair.second == maxLength) ans += 1;
        }

        return ans;
    }
};
