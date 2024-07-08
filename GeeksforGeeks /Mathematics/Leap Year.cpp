//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>


// } Driver Code Ends
//User function Template for C

int isLeap(int N){
 
 
    //code here
    if(N % 4 == 0 && N%100 != 0) {
        return 1;
    }
    
    else if(N%400 == 0) {
        return 1;
    }
    
    return 0;

    
    
    
}

//{ Driver Code Starts.

int main() 
{ 
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        printf("%d\n", isLeap(N));
    }
    return 0; 
}
// } Driver Code Ends
