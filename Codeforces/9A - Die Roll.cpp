#include<iostream>
#include<string>
using namespace std;

int gcd(int a, int b)
{
    int ans = min(a, b);
    while (ans > 0) {
        if (a % ans == 0 && b % ans == 0) {
            break;
        }
        ans--;
    }

    return ans;
}


string probability(int a, int b)
{
    int total = 6;
    
    int ans = 0;

    if(a>b) {
        ans = total - a + 1;
    } 

    else if(a<b) {
        ans = total - b + 1;
    }
    
    else {
        ans = total - b + 1;
    }

    int hcf = gcd(ans,total);

    int numerator = ans/hcf;
    int denominator = 6/hcf;

    string first = to_string(numerator);
    string second = to_string(denominator);

    return first+'/'+second;
}

int main()
{
    int a,b;
    cin >> a >> b;
    string ans = probability(a,b);
    cout << ans << endl;
    return 0;
}

