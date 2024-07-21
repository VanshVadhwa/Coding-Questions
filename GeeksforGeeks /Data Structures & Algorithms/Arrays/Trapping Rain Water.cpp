//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int nums[], int n){
        // code here
        // int n = nums.size();

        int leftmax = 0, rightmax = 0, index = 0;
        int maxHeight = nums[0];
        long long fill = 0;

        //maximum height index
        for(int i=1;i<n;i++)
        {
            if(maxHeight < nums[i]) 
            {
                maxHeight = nums[i];
                index = i;
            }
        }

        //left part index
        for(int i=0;i<index;i++)
        {
            if(nums[i]<leftmax) {
                fill += leftmax - nums[i];
            }
            else {
                leftmax = nums[i];
            }
        }

        //right part sort
        for(int i=n-1;i>index;i--)
        {
            if(nums[i]<rightmax) {
                fill += rightmax - nums[i];
            }
            else {
                rightmax = nums[i];
            }
        }
        return fill;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
