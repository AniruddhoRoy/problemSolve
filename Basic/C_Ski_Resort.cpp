#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<ll, ll>
#define PB(v)           \
    {                   \
        ll x;           \
        std::cin >> x;  \
        v.push_back(x); \
    }
#define out(text)             \
    {                         \
        cout << text << endl; \
    }
#define loop(n) for (ll i = 1; i <= (n); i++)

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> v;
        loop(n)
        {
            PB(v);
        }
        ll arr[n] = {0};
        ll j = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] <= q)
            {
                arr[j]++;
            }
            else
            {
                j++;
            }
        }
        ll result = 0;
        // for (ll x : arr)
        // {
        //     cout << x << " ";
        // }
        for (ll i = 0; i < n; i++)
        {
            if (k <= arr[i])
            {
                ll val = arr[i] - (k - 1);
                result = (val * (val + 1) / 2) + result;
            }
        }
        out(result);
    }
    return 0;
}