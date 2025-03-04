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
        ll n;
        cin >> n;

        int a[n];
        unordered_map<ll, ll> mp;
        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i] - (i + 1)]++;
        }

        for (auto x : mp)
        {
            ll z = x.second;
            ans += (z * (z - 1)) / 2;
        }

        cout << ans << "\n";
    }
    return 0;
}