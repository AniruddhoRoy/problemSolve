#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> v)
{
    long long rem = 0;
    for (int i = 0; i < v.size(); i++)
    {
        rem += v[i] - i;
        if (rem < 0)
        {
            // cout << rem << " ";
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << (solve(v) ? "YES" : "NO") << endl;
    }
    return 0;
}