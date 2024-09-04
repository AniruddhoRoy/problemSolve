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
        int x;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        sort(a, a + x);
        // for (int y : a)
        // {
        //     cout << y << " ";
        // }
        cout << a[x - 1] - a[0] << endl;
    }
    return 0;
}