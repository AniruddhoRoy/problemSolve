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
        ll n, b, c;
        cin >> n >> b >> c;
        if (b == 0)
        {
            if (c >= n)
            {
                cout << n << endl;
            }
            else if (c >= n - 2)
            {
                cout << n - 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (c >= n)
                cout << n << endl;
            else
                cout << n - max(0ll, 1 + (n - c - 1) / b) << endl;
        }
    }
    return 0;
}