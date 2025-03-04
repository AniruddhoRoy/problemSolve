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
bool cmp(pr a, pr b)
{
    if (a.first > b.first)
    {
        return true;
    }
    if (a.first == b.first)
    {
        if (a.second < b.second)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<pr> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x % k, i + 1});
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i].first > 0)
            {
                v[i].first = v[i].first - k;
            }
        }
        sort(v.begin(), v.end(), cmp);
        for (pr x : v)
        {
            cout << x.second << " ";
            // printf("[%d ,%d] ", x.first, x.second);
        }
        cout << endl;
    }

    return 0;
}