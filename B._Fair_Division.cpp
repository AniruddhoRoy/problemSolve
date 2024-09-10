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
        int t = 0, o = 0, x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            if (a == 2)
                t++;
            else
                o++;
        }
        // cout << t << " " << o << endl;
        t = t % 2;
        o -= t * 2;
        if (o % 2 == 0 && o >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}