#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 4 != 0 && n % 6 != 0 && n % 4 != 2)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n < 4)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << (((n % 6) == 4 || (n % 6) == 2) ? to_string(n / 6 + 1) : to_string(n / 6)) << " " << n / 4 << endl;
        }
    }
    return 0;
}