class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int xd = abs(sx-fx);
        int yd = abs(sy-fy);
        if(xd==0 && yd==0) {
            return (t > 1 || t==0);
        }
        return max(xd,yd) <= t;
    }
};
