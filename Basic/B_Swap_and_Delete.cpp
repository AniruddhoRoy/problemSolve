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
int solve(string s)
{
    int z = 0, o = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
        if (s[i] == '1')
        {
            o++;
        }
    }
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '1')
        {
            if (z == 0)
            {
                break;
            }
            else
            {
                z--;
            }
        }
        if (s[i] == '0')
        {
            if (o == 0)
            {
                break;
            }
            else
            {
                o--;
            }
        }
        i++;
    }
    return (s.size() - i);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            out("1");
        }
        else
        {
            out(solve(s));
        }
    }
    return 0;
}