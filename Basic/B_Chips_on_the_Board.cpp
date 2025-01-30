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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> v1;
        loop(n)
        {
            PB(v);
        }
        loop(n)
        {
            PB(v1);
        }
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());
        ll total = 0;
        ll total1 = 0;
        ll a = v.front();
        ll b = v1.front();
        for (int i = 0; i < n; i++)
        {
            total += b + v[i];
            total1 += a + v1[i];
        }
        out(min(total, total1));
    }
    return 0;
}