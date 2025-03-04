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
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        out(-1);
    }
    for (int i = ceill(a / 2.0); i <= a; i++)
    {
        if (i % b == 0)
        {
            out(i);
            break;
        }
    }

    return 0;
}