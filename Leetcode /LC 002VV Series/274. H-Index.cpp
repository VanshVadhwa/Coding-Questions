class Solution {
public:
    int hIndex(vector<int>& citations) {
        // counting sort - O(n) sorting technique 
        int n = citations.size();
        vector<int> bucket(n+1,0);
        for(int i : citations) {
            if(i>=n) {
                bucket[n]++;
            }
            else {
                bucket[i]++;
            }
        }

        int count = 0;
        for(int i=n;i>0;i--) {
            count += bucket[i];
            if(count >= i) {
                return i;
            }
        }

        return 0;
    }
};
