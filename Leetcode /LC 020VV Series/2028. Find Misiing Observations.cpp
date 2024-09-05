class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        vector<int> ans;

        int sum = 0;
        for(int i=0;i<m;i++) {
            sum += rolls[i];
        }

        int size = n+m;
        int totalSum = mean*size;
        int target = totalSum - sum;

        if (target < n || target > 6 * n) {
            return {};
        }

        int num = target/n;
        int rem = target%n;
    
        for (int i = 0; i < n; i++) {
            if (rem > 0) {
                ans.push_back(num + 1);  
                rem--;
            } 
            else {
                ans.push_back(num);
            }
        }

        return ans;
    }
};
