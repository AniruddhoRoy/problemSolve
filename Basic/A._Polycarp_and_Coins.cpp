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
        int c2 = x / 3;
        int c1 = x - c2 * 2;
        if (c1 - c2 > 1)
        {
            c1 -= 2;
            c2++;
        }
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}