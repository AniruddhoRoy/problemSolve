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

bool isSolved(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
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
        int n;
        cin >> n;
        vector<int> v;
        loop(n)
        {
            PB(v);
        }
        for (int i = 0, j = 1; j < v.size(); i++, j++)
        {
            // if (i == 0 || j == 0)
            // {
            //     continue;
            // }
            int mn = min(v[i], v[j]);
            v[i] -= mn;
            v[j] -= mn;
        }
        // for (int x : v)
        // {
        //     cout << x << " ";
        // }
        cout << endl;
        if (isSolved(v))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}