#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int x = max(a, b);
        int y = min(a, b);
        if (x < 2 * y)
        {
            cout << (2 * y) * (2 * y) << endl;
        }
        else
        {
            cout << x * x << endl;
        }
    }

    return 0;
}