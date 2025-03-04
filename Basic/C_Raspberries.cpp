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
int solve(vector<int> v, int k)
{
    int res = k - 1;
    int e_count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            e_count++;
        }
        if (v[i] % k)
        {

            res = min(res, (k - v[i] % k));
        }
        else
        {
            res = 0;
        }
    }
    if (k != 4)
    {
        return res;
    }
    else
    {
        if (e_count >= 2)
        {
            return 0;
        }
        else if (e_count == 1)
        {
            return min(1, res);
        }
        else
        {
            return min(2, res);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        loop(n)
        {
            PB(v);
        }
        out(solve(v, k));
    }
    return 0;
}