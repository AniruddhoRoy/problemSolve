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
bool solve(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        loop(n)
        {
            arr[i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            arr[x]++;
        }
        if (solve(arr, n))
        {
            out("YES");
        }
        else
        {
            out("NO");
        }
    }
    return 0;
}