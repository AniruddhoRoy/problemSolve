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
        int n;
        cin >> n;
        if (n == 1)
        {
            out(9);
        }
        else if (n == 2)
        {
            out(98);
        }
        else
        {
            cout << 98;
            int num = 9;
            for (int i = 0; i < n - 2; i++)
            {
                int dis = num % 10;
                cout << dis;
                num++;
            }
            cout << endl;
        }
    }
    return 0;
}