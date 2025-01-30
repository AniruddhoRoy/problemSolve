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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pr> v;
        vector<int> v1;
        vector<int> v2;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            PB(v1);
        }
        for (int i = 0; i < n; i++)
        {
            PB(v2);
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back({v1[i], v2[i]});
        }
        sort(v.begin(), v.end());
        for (pr x : v)
        {
            cout << x.first << " ";
        }
        cout << endl;
        for (pr x : v)
        {
            cout << x.second << " ";
        }
        cout << endl;
    }
    return 0;
}