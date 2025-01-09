#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "0 " << "0" << endl;
    }
    else
    {
        if (a < b)
        {
            swap(a, b);
        }
        long long d = a - b;
        cout << d << " " << min(b % d, d - b % d) << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}