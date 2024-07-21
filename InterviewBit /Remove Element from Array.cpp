int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count = 0;
    
    int n = A.size();
    
    int start = 0, end = n-1;
    
    while(start <= end)
    {
        if(A[start]==B) {
            start++;
        }
        else if(A[end]==B) {
            end--;
        }
        else if(A[start]!=B) {
            A[count] = A[start];
            start++;
            count++;
        }
        else if(A[end]!=B) {
            A[count] = A[end];
            end--;
            count++;
        }
    }
    return count;
}
