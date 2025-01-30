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
        vector<int> v;
        int n;
        cin >> n;
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x != 0)
            {
                if (l == -1 && r == -1)
                {
                    l = r = i;
                }
                else
                {
                    r = i;
                }
            }
        }
        int f = 0;
        if (l == -1 && r == -1)
        {
            out(0);
            continue;
        }
        else
        {
            for (int i = l; i <= r; i++)
            {
                if (v[i] == 0)
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f)
        {
            out(2);
        }
        else
        {
            out(1);
        }
    }
    return 0;
}