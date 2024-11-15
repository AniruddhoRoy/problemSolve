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
        string s;
        bool f = true;
        cin >> s;
        int x = (s.size()) / 2;
        if ((s.size()) % 2 != 0)
        {
            f = false;
        }
        for (int i = 0; i < x; i++)
        {

            if (s[i] != s[x + i])
            {
                f = false;
                break;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        f = true;
    }
    return 0;
}