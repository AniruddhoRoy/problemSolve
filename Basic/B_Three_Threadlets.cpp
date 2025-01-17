#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[i - 1])
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
        vector<int> v;
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        int i = 3;
        while (i--)
        {
            sort(v.begin(), v.end());
            if (solve(v))
            {
                break;
            }
            int max = v.back();
            int min = v.front();
            v.pop_back();
            v.push_back(max - min);
            v.push_back(min);
        }
        if (solve(v))
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