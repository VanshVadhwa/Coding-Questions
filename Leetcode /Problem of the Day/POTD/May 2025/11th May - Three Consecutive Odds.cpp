class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        
        for(int i : arr) {
            if(i%2 != 0) {
                count += 1;
                if(count == 3) return true;
            }
            else count = 0;
        }

        return false;
    }
};
