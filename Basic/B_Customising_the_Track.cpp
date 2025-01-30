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

ll total(vector<int> v)
{
    ll t = 0;
    for (int i = 0; i < v.size(); i++)
    {
        t += v[i];
    }
    return t;
}
// ll result(vector<int> v)
// {
//     ll count = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             count += abs(v[i] - v[j]);
//         }
//     }
//     return count;
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        loop(n)
        {
            PB(v);
        }
        ll sum = total(v);
        ll x = sum % n;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     v[i] = x;
        // }
        // for (int i = 0; i < (sum % n); i++)
        // {
        //     v[i]++;
        // }
        out(x * (n - x));
    }
    return 0;
}