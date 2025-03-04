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
        if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0)
        {
            out("First");
        }
        else
        {
            out("Second");
        }
    }
    return 0;
}