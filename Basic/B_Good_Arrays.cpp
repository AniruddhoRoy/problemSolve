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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            PB(v);
        }
        long long total1 = 0, total2 = 0;
        for (int i = 0; i < n; i++)
        {
            total1 += v[i];
            if (v[i] > 1)
            {
                total2++;
            }
            else
            {
                total2++;
                total2++;
            }
        }
        if (total1 >= total2 && n != 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}