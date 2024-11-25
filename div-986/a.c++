#include <bits/stdc++.h>
using namespace std;
int x = 0, y = 0, a, b;
void poss(char p)
{
    if (p == 'E')
    {
        x++;
    }
    else if (p == 'W')
    {
        x--;
    }
    else if (p == 'N')
    {
        y++;
    }
    else if (p == 'S')
    {
        y--;
    }
}
bool check()
{
    if (x == a && y == b)
    {
        return true;
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
        cin >> n >> a >> b;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 100 * (a + b); i++)
        {
            for (int j = 0; j < n; j++)
            {
                poss(arr[j]);
                if (check())
                {
                    cout << "YES" << endl;
                    goto end;
                }
            }
        }
    end:
        if (!check())
        {
            cout << "NO" << endl;
        }
        x = y = 0;
    }
    return 0;
}