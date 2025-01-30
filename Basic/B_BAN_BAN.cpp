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
        int k = 1, j = 3 * n;
        if (n % 2)
        {
            out(n / 2 + 1);
            loop(n / 2)
            {
                out(k << " " << j);
                k += 3;
                j -= 3;
            }
            out(2 << " " << j);
        }
        else
        {
            out(n / 2);
            loop(n / 2)
            {
                out(k << " " << j);
                k += 3;
                j -= 3;
            }
        }
    }
    return 0;
}