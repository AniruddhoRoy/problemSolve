#include <bits/stdc++.h>
using namespace std;
bool Isodd(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            return false;
        }
    }
    return true;
}
bool Iseven(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 1)
        {
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
        if (Isodd(v) || Iseven(v))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}