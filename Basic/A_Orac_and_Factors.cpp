#include <bits/stdc++.h>
using namespace std;
long long rem(long long n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        n += rem(n);
        n += ((q - 1) * 2);
        cout << n << endl;
    }

    return 0;
}