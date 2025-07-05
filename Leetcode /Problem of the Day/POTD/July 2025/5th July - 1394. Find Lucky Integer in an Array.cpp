class Solution {
public:
    int findLucky(vector<int>& arr) {
        int marked [501] = {0};
        for(int i : arr) marked[i]++;
        for(int i=500;i>0;i--) if(i==marked[i]) return i;
        return -1;
    }
};



