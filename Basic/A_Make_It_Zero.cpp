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
        cin >> n;
        vector<int> v;
        loop(n)
        {
            PB(v);
        }
        if (n % 2)
        {
            out(4);
            out(1 << " " << n - 1);
            out(1 << " " << n - 1);
            out(n - 1 << " " << n);
            out(n - 1 << " " << n);
        }
        else
        {
            out(2);
            out(1 << " " << n);
            out(1 << " " << n);
        }
    }
    return 0;
}