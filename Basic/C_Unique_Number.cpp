#include <bits/stdc++.h>
using namespace std;
void solve(int x)
{
    vector<int> v;
    for (int i = 9; i > 0; i--)
    {
        if (x >= i)
        {
            x -= i;
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    for (int a : v)
    {
        cout << a;
    }
    cout << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x > 45)
        {
            cout << "-1" << endl;
            continue;
        }
        solve(x);
    }
    return 0;
}