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
bool isSorted(vector<int> v)
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
        int n, m;
        cin >> n >> m;
        vector<int> v;
        loop(n)
        {
            PB(v);
        }
        if (m < 2 && !isSorted(v))
        {
            out("NO");
        }
        else
        {
            out("YES");
        }
    }

    return 0;
}