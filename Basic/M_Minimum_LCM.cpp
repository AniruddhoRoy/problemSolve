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
        int x = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                x = n / i;
                break;
            }
        }
        out(x << " " << n - x);
    }
    return 0;
}