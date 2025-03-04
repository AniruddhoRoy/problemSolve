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
        char r;
        string s;
        cin >> n >> r >> s;
        vector<int> v;
        bool f1 = false, f2 = false;
        int count = 0;
        for (int i = 0; i < 2 * s.size(); i++)
        {
            if (i == s.size())
            {
                f2 = true;
            }
            if (!f1 && f2)
            {
                break;
            }

            if (s[i % n] == r)
            {
                f1 = true;
            }
            if (s[i % n] == 'g')
            {
                f1 = false;
            }
            if (f1)
            {
                count++;
            }
            else
            {
                v.push_back(count);
                count = 0;
            }
        }
        int mx = 0;
        for (int x : v)
        {
            mx = max(mx, x);
        }
        out(mx);
    }
    return 0;
}