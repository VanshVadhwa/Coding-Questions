#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1;
    cin >> s2;

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i]) {
            s1[i] = '0';
        }
        else if(s1[i] != s2[i]) {
            s1[i]= '1';
        }
    }

    cout << s1 << endl;
    return 0;
}
