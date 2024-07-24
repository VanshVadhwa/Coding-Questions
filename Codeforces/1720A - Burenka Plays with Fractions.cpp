#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long n1 = a * d;
        long long n2 = b * c;

        if (n1 == n2)
            cout << 0 << endl;
        else if (n1 == 0 || n2 == 0)
            cout << 1 << endl;
        else if ((n1 % n2 == 0) || (n2 % n1 == 0))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
