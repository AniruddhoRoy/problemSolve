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

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        l--, r--;
        vector<ll> v;
        loop(n)
        {
            PB(v);
        }
        vector<ll> x;
        vector<ll> y;
        for (ll i = 0; i <= r; i++)
        {
            x.push_back(v[i]);
        }
        for (ll i = l; i < n; i++)
        {
            y.push_back(v[i]);
        }
        ll rang = r - l;
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ll a = 0, b = 0;
        for (ll i = 0; i <= rang; i++)
        {
            a += x[i];
            b += y[i];
        }
        out(min(a, b));
    }

    return 0;
}