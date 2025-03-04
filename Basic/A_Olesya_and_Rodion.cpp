#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
#define PB(v)           \
    {                   \
        int x;          \
        std::cin >> x;  \
        v.push_back(x); \
    }
#define out(text)             \
    {                         \
        cout << text << endl; \
    }
#define loop(n) for (int i = 1; i <= (n); i++)
ll digit(ll x)
{
    int count = 0;
    while (x != 0)
    {
        x /= 10;
        count++;
    }
    return count;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    if (digit(m) > n)
    {
        cout << -1;
    }
    else
    {

        ll result = pow(10, n) - 1;
        ll div = result / m;
        out(int(div * m));
    }
    return 0;
}