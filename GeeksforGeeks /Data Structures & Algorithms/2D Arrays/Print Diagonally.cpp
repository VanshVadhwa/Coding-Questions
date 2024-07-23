//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		ans.push_back(A[0][0]);
		
		for(int j=1;j<N;j++)
		{
		    int index = j;
		    for(int i=0;i<=j;i++)
		    {
		        ans.push_back(A[i][index]);
		        index -= 1;
		    }
		}
		
		for(int i=1;i<N;i++)
		{
		    int index = i;
		    for(int j=N-1;j>=i;j--)
		    {
		        ans.push_back(A[index][j]);
		        index += 1;
		    }
		}
		
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends

//Link: https://www.geeksforgeeks.org/problems/print-diagonally4331/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
