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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back(abs(x - i));
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans = __gcd(ans, v[i]);
        }
        cout << ans << endl;
    }

    return 0;
}