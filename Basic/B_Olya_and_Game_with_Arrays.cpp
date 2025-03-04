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
        ll n;
        cin >> n;
        vector<vector<ll>> v;
        loop(n)
        {
            ll m;
            cin >> m;
            vector<ll> temp;
            loop(m)
            {
                PB(temp);
            }
            v.push_back(temp);
        }
        for (ll i = 0; i < v.size(); i++)
        {
            sort(v[i].begin(), v[i].end());
        }
        vector<ll> f_min;
        vector<ll> s_min;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i].size() > 1)
            {
                f_min.push_back(v[i].front());
                s_min.push_back(v[i][1]);
            }
            else
            {
                s_min.push_back(v[i][0]);
            }
        }
        sort(f_min.begin(), f_min.end());
        vector<ll> result;
        for (ll i = 0; i < s_min.size(); i++)
        {
            ll temp = 0;
            for (ll j = 0; j < s_min.size(); j++)
            {
                if (i == j)
                {
                    if (v[i].front() < f_min.front())
                    {
                        temp += v[i].front();
                    }
                    else
                    {
                        temp += f_min.front();
                    }
                }
                else
                {
                    temp += s_min[j];
                }
            }
            result.push_back(temp);
        }
        ll mx = 0;
        for (ll i = 0; i < result.size(); i++)
        {
            mx = max(mx, result[i]);
        }
        out(mx);
    }
    return 0;
}