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

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<ll> pref(n + 10), suf(n + 10);
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1];
        if (v[i - 2] > v[i - 1])
            pref[i] += v[i - 2] - v[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1];
        if (v[i] < v[i + 1])
            suf[i] += v[i + 1] - v[i];
    }

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << pref[y] - pref[x] << '\n';
        }
        else
        {
            cout << suf[y - 1] - suf[x - 1] << '\n';
        }
    }
    return 0;
}