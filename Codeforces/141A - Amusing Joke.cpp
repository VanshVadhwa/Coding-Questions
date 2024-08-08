#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a,b,c;
    cin >> a >> b >> c;

    if(a.length()+b.length() != c.length()) {
        cout << "NO" << endl;
        return 0;
    }

    unordered_map<char, int> map;

    for(char c : a) map[c]++;
    for(char c : b) map[c]++;

    for(char i : c)
    {
        if(map[i]>0) {
            map[i]--;
        }
        else {
            cout << "NO" << endl;
            return 0; 
        }
    }

    cout << "YES" << endl;
    return 0;
}
