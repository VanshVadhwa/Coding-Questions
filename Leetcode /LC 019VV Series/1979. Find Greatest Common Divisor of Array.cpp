class Solution {
private:
    int gcd(int a, int b) {
        while(b!=0) {
            int temp = a;
            a = b;
            b = temp%b;
        }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());

        return gcd(min, max);
    }
};
