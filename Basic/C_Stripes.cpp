#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int f = 0;
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        if (s == "RRRRRRRR")
        {
            f = 1;
        }
    }
    printf("%s\n", (f) ? "R" : "B");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}