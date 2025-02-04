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
        int n, k;
        cin >> n >> k;
        // int count = 0;
        // for (int i = n; i <= k; i++)
        // {
        //     if (i % n == 0)
        //     {
        //         count++;
        //     }
        // }
        // for (int i = 0; i < count; i++)
        // {
        //     k++;
        //     if (k % n == 0)
        //     {
        //         i--;
        //     }
        // }
        int result = k / n;
        int result1 = (k + result) / n;
        while ((result - result1) != 0)
        {
            result = result1;
            result1 = (k + result) / n;
        }
        out(int(k + result + (result1 - result)));
    }
    return 0;
}