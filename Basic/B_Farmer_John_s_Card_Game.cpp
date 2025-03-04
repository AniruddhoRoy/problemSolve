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

bool solve(vector<pr> v, vector<int> seq)
{
    for (int i = 0, j = 0; i < v.size(); i++, j++)
    {
        if (j == seq.size())
        {
            j = 0;
        }
        if (v[i].second != seq[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pr> v;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                v.push_back({x, i});
            }
        }
        sort(v.begin(), v.end());
        vector<int> seq;
        for (int i = 0; i < n; i++)
        {
            seq.push_back(v[i].second);
        }
        if (solve(v, seq))
        {
            for (int x : seq)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}