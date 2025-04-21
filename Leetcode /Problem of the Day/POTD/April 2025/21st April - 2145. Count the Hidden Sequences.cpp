class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long maxi = 0, mini = 0;
        long long sum = 0;

        for(int i : differences) {
            sum += i;
            mini = min(sum,mini); 
            maxi = max(sum,maxi); 
        }

        long long range = upper-lower+1;
        return range-(maxi-mini) >= 0 ? range-(maxi-mini) : 0;
    }
};
