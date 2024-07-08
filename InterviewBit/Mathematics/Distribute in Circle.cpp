int Solution::solve(int A, int B, int C) {
    // while(A>0) {
    //     if(C<=B) {
    //         C += 1;
    //     }
    //     else {
    //         C = 1;
    //     }
    //     A--;
    // }
    // return C;
    int position = (C+A-1) % B;
    if(position == 0) {
        return 0;
    }
    return position;
}
