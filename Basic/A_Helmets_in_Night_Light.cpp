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
bool cmp(pr a, pr b)
{
    if (a.second < b.second)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<pr> v;
        vector<long long> v1;
        vector<long long> v2;
        loop(n)
        {
            PB(v1);
        }
        loop(n)
        {
            PB(v2);
        }
        for (int i = 0; i < v1.size(); i++)
        {
            v.push_back({v1[i], v2[i]});
        }
        sort(v.begin(), v.end(), cmp);
        long long result = c;
        ll count = 1;
        int i = 0;
        while (count < n)
        {
            if (v[i].second < c)
            {
                if (v[i].first > 0)
                {
                    v[i].first = v[i].first - 1;
                    result += v[i].second;
                    count++;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                count++;
                result += c;
            }
        }
        out(result);
        // for (int i = 0; i < n; i++)
        // {
        //     printf("[%d,%d] ", v[i].first, v[i].second);
        // }
        // cout << endl;
    }
    return 0;
}