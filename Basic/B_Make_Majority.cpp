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

bool solve(vector<char> v)
{
    int z = 0, o = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '1')
        {
            o++;
        }
        else
        {
            z++;
        }
    }
    if (o > z)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v;
        char trac = 1;
        loop(n)
        {
            char x;
            cin >> x;
            if (x == '0' && trac == '0')
            {
                continue;
            }
            v.push_back(x);
            trac = x;
        }
        if (solve(v))
        {
            out("Yes");
        }
        else
        {
            out("No");
        }
        // for (char x : v)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
    }
    return 0;
}