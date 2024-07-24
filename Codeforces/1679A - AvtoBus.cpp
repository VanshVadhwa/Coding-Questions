#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n < 4)
            cout << -1 << endl;

        else if (n % 2 != 0)
            cout << -1 << endl;

        else if (n % 2 == 0)
        {
            long long maxi = n / 4;
            long long mini = n / 6;

            if (n % 6 != 0)
                mini++;

            cout << mini << " " << maxi << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
