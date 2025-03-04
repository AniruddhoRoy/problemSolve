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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<ll> v(n, 0);
        v[n - 1] = k * b;
        if (k * b > s)
        {
            out(-1);
        }
        else if (k * b < s)
        {
            ll add = (s - k * b);
            for (int i = v.size() - 1; i >= 0; i--)
            {
                if (add < k)
                {
                    v[i] += add;
                    add = 0;
                    break;
                }
                v[i] += (k - 1);
                add -= (k - 1);
            }
            if (add == 0)
            {
                for (ll &x : v)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
            else
            {
                out(-1);
            }
        }
        else
        {
            for (ll &x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}