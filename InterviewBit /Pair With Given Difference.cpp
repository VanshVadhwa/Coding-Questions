int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    sort(A.begin(),A.end());
    int start = 0, end = 1;
    
    if(B<0) {
        B*=-1;
    }
    
    while(end<n)
    {
        //subtraction equal to B
        if(A[end]-A[start]==B) {
            return 1;
        }
        
        //subtraction less than B
        if(A[end]-A[start]<B) {
            end++;
        }
        
        //subtraction greate than B
        else {
            start++;
        }
        
        if(start==end) {
            end++;
        }
    }
    return 0;
}
