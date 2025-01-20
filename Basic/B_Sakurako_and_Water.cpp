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
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int total = 0;
        int add = 0;
        for (int k = 0; k < n; k++)
        {
            for (int i = k, j = 0; i < n; i++, j++)
            {
                // out(i << " " << j);
                if (arr[i][j] < 0)
                {
                    add = min(add, arr[i][j]);
                }
            }
            total += add;
            add = 0;
            for (int i = 0, j = k + 1; j < n; i++, j++)
            {
                // out(i << " " << j);
                if (arr[i][j] < 0)
                {
                    add = min(add, arr[i][j]);
                }
            }
            total += add;
            add = 0;
        }
        out(-1 * total);
    }
    return 0;
}