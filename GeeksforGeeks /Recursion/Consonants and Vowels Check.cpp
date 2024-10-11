//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void checkString(string s);


// } Driver Code Ends
//User function Template for C++

int countVowels(string s, int n) {
    if(n==-1) {
        return 0;
    }
    char c = s[n];
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
        return 1 + countVowels(s,n-1);
    }
    return countVowels(s,n-1);
}

int countConsonents(string s, int n) {
    if(n==-1) {
        return 0;
    }
    char c = s[n];
    if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!=' ') {
        return 1 + countConsonents(s,n-1);
    }
    return countConsonents(s,n-1);
}

void checkString(string s)
{
    int n = s.length();
    int vowels = countVowels(s,n-1);
    int consonents = countConsonents(s,n-1);
    if(consonents > vowels) {
        cout << "No";
    }
    else if (consonents < vowels) {
        cout << "Yes";
    }
    else {
        cout << "Same";
    }
    cout << endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    
	    //function call
	    checkString(s);
	   
	}
	return 0;
}


// } Driver Code Ends
