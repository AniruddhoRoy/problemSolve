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

ll total(vector<int> x)
{
    ll sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        sum += x[i];
    }
    return sum;
}
ll total1(vector<int> x)

    int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x;
        loop(n)
        {
            int v;
            cin >> v;
            x.push_back(v);
        }
        vector<int> y(x.begin(), x.end());
        reverse(y.begin(), y.end());
        while (x.size() > 0)
        {
        }
    }
    return 0;
}