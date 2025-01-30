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
        if (n == 2)
        {
            out(1);
        }
        else if (n == 3)
        {
            out(7);
        }
        else if (n >= 4)
        {
            if (n % 2)
            {
                cout << 7;
                for (int i = 0; i < (n / 2) - 1; i++)
                {
                    cout << 1;
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < (n / 2); i++)
                {
                    cout << 1;
                }
                cout << endl;
            }
        }
    }
    return 0;
}