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

int max(vector<int> v)
{
    int mx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        mx = max(mx, v[i]);
    }
    return mx;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        v.push_back(0);
        loop(n)
        {
            PB(v);
        }
        vector<int> solve;
        for (int i = 1; i < v.size(); i++)
        {
            solve.push_back(v[i] - v[i - 1]);
        }
        solve.push_back((x - v.back()) * 2);
        out(max(solve));
    }
    return 0;
}