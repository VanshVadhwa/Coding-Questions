// Soltution 1

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0;i<s.length();i+=2) 
    {
        int index = i;
        for(int j=i+2;j<s.length();j+=2) {
            if(s[j]<s[index]) {
                index = j;
            }
        }
        swap(s[i],s[index]);
    }

    cout << s << endl;
    
    return 0;
}

// Solution 2

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string number = "";

    for(int i=0;i<s.length();i++) 
    {
        if(s[i]!='+') {
            number+=s[i];
        }
    }

    sort(number.begin(),number.end());

    string ans = "";
    for(int i=0;i<number.length();i++) {
        ans+=number[i];
        ans += '+';
    }

    ans.pop_back();
    cout << ans << endl;
    
    return 0;

}
