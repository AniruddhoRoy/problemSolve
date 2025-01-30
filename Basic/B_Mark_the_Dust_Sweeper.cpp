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
ll solve(vector<int> v)
{
    ll count = 0, temp = 1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != 0)
        {
            count += v[i];
            for (int j = i + 1; j < v.size() - 1; j++)
            {
                if (v[j] != 0)
                {
                    break;
                }
                count++;
            }
        }
    }
    return count;
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
        out(solve(v));
    }
    return 0;
}