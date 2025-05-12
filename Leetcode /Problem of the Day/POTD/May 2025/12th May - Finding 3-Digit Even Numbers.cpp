class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> seen(10,0);
        vector<int> ans;

        for(int i : digits) seen[i]++;

        for(int i=100;i<=999;i++) {
            if(i%2 != 0) continue;
            vector<int> temp(10,0);
            temp[i%10]++, temp[(i/10)%10]++, temp[i/100]++;
            bool flag = true;
            for(int j=0;j<10;j++) {
                if(temp[j] > seen[j]) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back(i);
        }

        return ans;
    }
};
