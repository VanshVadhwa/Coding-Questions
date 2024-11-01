int Solution::solve(vector<int> &A) {
    unordered_map<int,int> map;
    
    for(int i : A) {
        map[i]++;
    }
    
    for(int i : A) {
        if(map[i]>1) {
            return i;
        }
    }
    
    return -1;
}
