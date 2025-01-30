#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<ll, ll>
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
pr solve(vector<ll> v, ll min, ll max)
{
    ll mi = 0, mx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == min)
        {
            mi++;
        }
        if (v[i] == max)
        {
            mx++;
        }
    }
    return {mi, mx};
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        loop(n)
        {
            PB(v);
        }
        sort(v.begin(), v.end());
        ll min = solve(v, v.front(), v.back()).first;
        ll max = solve(v, v.front(), v.back()).second;
        if (v.front() == v.back())
        {
            out(min * (min - 1));
        }
        else
        {
            out(2 * min * max);
        }
    }
    return 0;
}